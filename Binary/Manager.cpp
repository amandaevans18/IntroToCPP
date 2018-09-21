#include "Manager.h"


void helloWorld() 
{
	  fstream file;
	  string fileName;
	  string inTheFile;
	  cout << "What would you like to name your file?" << endl;
	  cin >> fileName;
	  fileName += ".bin";
	  cin.clear();
	  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	  cout << "What would you like to put in your file?" << endl;
	  getline(cin, inTheFile);
	  //gotta clear your cins
	  cin.clear();
	  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  //use .c_str() bc you need to get a char array from it? doesnt make sense to me tho tbh
	file.open(fileName.c_str(), std::ios::out | std::ios::binary);

  // verify that the file is open
	 if (file.fail())
	 {
		std::cerr << "File not found." << std::endl;
		return;
	 }

	 //yeets away all the flags
	 file.clear();

	 //moves cursor to end?
	 file.seekp(0, ios_base::end);

	 file << inTheFile << endl;

	 file.flush();
	 file.close();

}

void loadFiles()
{
	string fileName;
	std::fstream file;

	cout << "What file would you like to read?" << endl;
	cin >> fileName;
	fileName += ".bin";
	// open a file relative to the working directory of the project
	file.open(fileName.c_str(), std::ios::in | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
		return;
	}

	cout << "Your file says..."<< endl;
	std::string buffer;
	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		cout << buffer << endl;
	}

	// delete them errors
	file.clear();

	file.close();



}

void saveFiles(saveData player)
{
	fstream file;
	string fileName;
	
	cout << "What is your file name?" << endl;
	getline(cin, fileName);
	fileName += ".bin";
	//cleanse your cins
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//use .c_str() bc you need to get a char array from it? doesnt make sense to me tho tbh
	//does the 
	file.open(fileName.c_str(), std::ios::out | std::ios::binary);
	
	file.seekp(0, ios_base::end);
	file << "Player name: " << player.playerName << endl;
	file << "Player deaths: " << player.deathCount << endl;
	file << "Player's deepest floor: " << player.deepestFloor << endl;
	file << "Player has beaten game: " << player.hasBeenBeatenGame << endl;
	file << "Player's time played: " << player.timePlayed << endl;

	
	//yeets away all the flags
	file.clear();

	//file << "Player name: "<<player.playerName << endl;
	//file << "Player deaths: " << player.deathCount << endl;
	//file << "Player's deepest floor: " << player.deepestFloor << endl;
	//file << "Player has beaten game: " << player.hasBeenBeatenGame << endl;
	//file << "Player's time played: " << player.timePlayed << endl;

	file.flush();
}

void addMonster()
{
	fstream file;
	string fileName;

	string idNum;
	string monsterLine;
	string monsterName;
	bool correctID = false;
	bool correctName = false;
	bool correctLine = false;
	
	cout << "Add monster acessed" << endl;
	system("pause");
	while (!correctID || !correctLine || !correctName)
	{
		cout << "Whats the monsters ID?(No negative numbers!)" << endl;
		cin >> idNum;
		//cleanse your cins
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//checking input of id number
		for (int i = 0; i < idNum.length(); i++)
		{
			if (idNum[i] > 47 && idNum[i] < 58)
			{
				correctID = true;
			}
			else
			{
				correctID = false;
				cout << "Thats not a number..." << endl;
				break;
			}
		}
		if (correctID = false)
		{
			continue;
		}
		cout << "Whats the monsters name?" << endl;
		getline(cin, monsterName);
		//cleanse your cins
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		for (int i = 0; i < monsterName.length(); i++)
		{
			if (monsterName[i] < 47 && monsterName[i] > 58)
			{
				correctID = true;
			}
			else
			{
				correctName = false;
				cout << "No numbers.." << endl;
				break;
			}
		}
		if (correctName = false)
		{
			continue;
		}
		cout << "Whats the monsters catch phrase?" << endl;
		getline(cin, monsterLine);
		//cleanse your cins
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		for (int i = 0; i < monsterLine.length(); i++)
		{
			if (monsterLine[i] < 47 && monsterLine[i] > 58)
			{
				correctID = true;
			}
			else
			{
				correctLine = false;
				cout << "No numbers..." << endl;
				break;
			}
		}
		if (correctLine = false) 
		{
			continue;
		}
		if (correctID && correctLine && correctName)
		{
			break;
		}

	}

	if (correctID && correctLine && correctName) 
	{
		fileName = idNum + ".bin";
		//For testing! 
		cout << "Wow correct inputs" << endl;
		cout << "" << endl;

		//saving info to a struct to be used in save to master list.
		Monster currentMonster{ idNum,monsterName,monsterLine };

		file.open(fileName.c_str(), std::ios::out | std::ios::binary);
		
		file.seekp(0, ios_base::end);
		file <<"Monster ID: "<< idNum << endl;
		file <<"Monster Type: "<< monsterName << endl;
		file <<"Monster Phrase: "<< monsterLine << endl;
		saveToMasterList(currentMonster);
	}

}

void removeMonster()
{
	fstream file;
	string fileName;
	string idNum;
	char confirm;
	cout << "remove monster acessed" << endl;
	cout << "What monster's life would you like to delete...by id number" << endl;
	cin >> idNum;

	fileName = idNum + ".bin";

	// open a file relative to the working directory of the project
	file.open(fileName.c_str(), std::ios::in | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "Monster not found." << std::endl;
		return;
	}

	cout << "The monster whomst you want to delete... " << endl;
	string buffer;

	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		cout << buffer << endl;
	}
	file.clear();

	file.close();
	cout << "Are you sure you want to delete him....(Y/N)" << endl;
	cin >> confirm;
	//cleanse your cins
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	tolower(confirm);
	if (confirm == 'y') 
	{
		cout << "His poor family... I guess we know who the real monster is..." << endl;
		remove(fileName.c_str());
		deleteFromMasterList(idNum);
	}
	else if (confirm == 'n') 
	{
		cout << "Good!" << endl;
	}
	else 
	{
		cout << "That wasn't a yes or no..." << endl;
	}

	// delete them errors


	system("pause");
}

void viewMonster()
{
	fstream file;
	string fileName;
	string idNum;
	bool correctInput = false;


	cout << "View monster acessed" << endl;
	cout << "Look up your monster by ID" << endl;
	cin >> idNum;
	//cleanse your cins
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (int i = 0; i < idNum.length(); i++)
	{
		if (idNum[i] > 47 && idNum[i] < 58)
		{
			correctInput = true;
		}
		else
		{
			correctInput = false;
			break;
		}
	}
	fileName = idNum + ".bin";

	// open a file relative to the working directory of the project
	file.open(fileName.c_str(), std::ios::in | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "Monster not found." << std::endl;
		return;
	}

	cout << "Your Monster: " << endl;
	string buffer;

	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		cout << buffer << endl;
	}

	// delete them errors
	file.clear();

	file.close();

	system("pause");
}

void browseMonster()
{
	cout << "browse monster acessed" << endl;
	fstream file;
	string fileName;

	fileName = "masterFile.bin";

	// open a file relative to the working directory of the project
	file.open(fileName.c_str(), std::ios::in | std::ios::binary);

	// verify that the file is open
	if (file.fail())
	{
		std::cerr << "No monsters saved." << std::endl;
		return;
	}

	cout << "Monster's: " << endl;
	string buffer;

	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		cout << buffer << endl;
	}

	// delete them errors
	file.clear();
	file.close();

	system("pause");
}

void saveToMasterList(Monster current)
{
	fstream file;
	string fileName = "masterFile.bin";

	file.open(fileName.c_str(), std::ios::app | std::ios::binary);

	file.seekp(0, ios_base::end);
	file <<current.idNum << ", ";
	file << current.monsterName << ", ";
	file << current.monsterLine << endl;

	file.clear();

	file.close();

}

void deleteFromMasterList(string recivedIdNum)
{
	fstream file;
	fstream tempFile;
	string fileName = "masterFile.bin";
	string tempFileName = "tempFile.bin";
	string currentIdNum;//used in this case for a check
	string buffer;
	file.open(fileName.c_str(), std::ios::in | std::ios::binary);
	// copys the master file to a temp file
	while (getline(file, buffer))
	{
		for (int i = 0; i< buffer.length(); i++)
		{
			if (buffer[i] > 47 && buffer[i] < 58)
			{
				currentIdNum = currentIdNum + buffer[i];
			}

		}
		if (currentIdNum != recivedIdNum) 
		{
			
			tempFile.open(tempFileName.c_str(), std::ios::app | std::ios::binary);
			tempFile << buffer <<endl;
			currentIdNum.clear();
		}

	}
	//delete masterFile than copy tempFile to master file!!
	file.clear();

	file.close();
	tempFile.clear();

	tempFile.close();

	string bufferTwo;
	remove("masterFile.bin");
	tempFile.open(tempFileName.c_str(), std::ios::in | std::ios::binary);
	file.open(fileName.c_str(), std::ios::out | std::ios::binary);
	while (getline(tempFile,bufferTwo))
	{
		file << bufferTwo << endl;
	}


	tempFile.clear();

	tempFile.close();
	remove("tempFile.bin");
	file.clear();

	file.close();

}