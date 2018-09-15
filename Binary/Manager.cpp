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

void addMonster(int idArr[])
{
	int idNum = -1;
	
	cout << "Add monster acessed" << endl;
	system("pause");
	cout << "Whats the monsters ID? (1 - 100)" << endl;
	cin >> idNum;
	idNum -1;
	if (idNum > 0 && idNum < 100) 
	{
		cout << "Wow a correct input" << endl;
	}
	else 
	{
		cout << "Pick a better input" << endl;
	}
}

void removeMonster()
{
	cout << "remove monster acessed" << endl;
	system("pause");
}

void viewMonster()
{
	cout << "view monster acessed" << endl;
	system("pause");
}

void browseMonster()
{
	cout << "browse monster acessed" << endl;
	system("pause");
}
