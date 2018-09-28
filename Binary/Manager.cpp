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
	

	//file << "Player name: "<<player.playerName << endl;
	//file << "Player deaths: " << player.deathCount << endl;
	//file << "Player's deepest floor: " << player.deepestFloor << endl;
	//file << "Player has beaten game: " << player.hasBeenBeatenGame << endl;
	//file << "Player's time played: " << player.timePlayed << endl;

	file.flush();
	file.clear();
	file.close();
}

void addMonster()
{
	fstream file;
	string fileName;

	string idNum;
	string monsterLine;
	string monsterName;
	string listedId;
	bool correctID = false;
	bool noDups = false;
	bool numbers = false;
	string masterFile = "masterFile.bin";


		cout << "Add monster acessed" << endl;
		system("pause");
		string buffer;
		//will loop until correct id = true
		while (!correctID)
		{
			//opens the master file to view 
			file.open(masterFile.c_str(), std::ios::in | std::ios::binary);
			//promts player for monster ID
			cout << "Whats the monsters ID?(No negative numbers!)" << endl;
			//takes in monster ID
			cin >> idNum;
			//cleanse your cins
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//checking if the master file failed to open if it didnt then look through... if it did there cannot be dupes
			if (!file.fail())
			{
				//Goes until no more lines or noDups is true
				while (getline(file, buffer)) // just getline!
				{
					//checks to see if the line is not empty
					if (buffer.length() != 0)
					{
						//then goes through buffers length
						for (int i = 0; i < buffer.length(); i++)
						{
							if (buffer[i] == ',')
							{
								//stop when you hit a comma in the master list.
								break;
							}
							else
							{
								//else set listedId to the id being read
								listedId = listedId + buffer[i];
							}
						}
						//checks the listedId if it is the idNUm then reset everything close the file and the id is already in use! break out of current while
						if (listedId == idNum)
						{
							idNum.clear();
							listedId.clear();
							cout << "ID already in use!" << endl;
							file.clear();
							file.close();
							break;
						}//else just reset everything but set nodups to true bc  also close the file and break out of current while
						else
						{
							buffer.clear();
							listedId.clear();
							noDups = true;
							break;
						}
					}//if buffer is empty (aka if the master list is empty)
					else
					{
						//clear the collectd id clear the buffer and nodups has to equal true if the master file is empty
						listedId.clear();
						buffer.clear();
						noDups = true;
					}
				}//closeing the file after looping through it
				file.clear();
				file.close();
			}//if the file didnt open then that means it hasnt been created so has to be empty
			else 
			{
				noDups = true;
			}
			//loops through idNums
			for (int i = 0; i < idNum.length(); i++)
			{//if idNum has numbers in it 
				if (idNum[i] > 47 && idNum[i] < 58)
				{
					numbers = true;
				}
				else
				{//if it doesnt try again my dude
					cout << "Thats not a number..." << endl;
					break;
				}
			}
			//debug for what dups and nums equals at the end of the checking.
			//cout << "No dups " << noDups << " nums " << numbers << endl;
			if (numbers == false || noDups == false) //if either of these inputs are wrong reenter one
			{
				noDups = false;//reset to false
				numbers = false;//reset to false
				continue;//back to top of loop
			}
			else 
			{//correctId is true if neither of those are false
				correctID = true;
			}


		}
		//if correctId is true take in all the info and then add a monster
		if (correctID == true)
		{
			cout << "Whats the monsters name?" << endl;
			getline(cin, monsterName);
			//cleanse your cins
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Whats the monsters catch phrase?" << endl;
			getline(cin, monsterLine);
			//cleanse your cins
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			fileName = idNum + ".bin";
			//For testing! 
			cout << "Wow correct inputs" << endl;
			cout << "" << endl;

			//saving info to a struct to be used in save to master list.
			Monster currentMonster{ idNum,monsterName,monsterLine };

			file.open(fileName.c_str(), std::ios::out | std::ios::binary);

			file.seekp(0, ios_base::end);
			file << "Monster ID: " << idNum << endl;
			file << "Monster Type: " << monsterName << endl;
			file << "Monster Phrase: " << monsterLine << endl;
			saveToMasterList(currentMonster);
			noDups = false;
			numbers = false;
			idNum.clear();
			correctID = false;
			monsterLine.clear();
			monsterName.clear();
			file.clear();
			file.close();
		}
		else 
		{
			cout << "try that number again.." << endl;
			noDups = false;
			numbers = false;
			idNum.clear();
			correctID = false;
			monsterLine.clear();
			monsterName.clear();

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
			if (buffer[i] == ',')
			{
				break;
			}
			else 
			{
				currentIdNum = currentIdNum + buffer[i];
			}

		}
		if (currentIdNum != recivedIdNum) 
		{
			tempFile.open(tempFileName.c_str(), std::ios::app | std::ios::binary);
			tempFile << buffer << endl;
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