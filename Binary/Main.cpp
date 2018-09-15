#include<iostream>
#include"Manager.h"


int main() 
{
	saveData data{"Amanda",6,6,false,0};
	//helloWorld();
	//system("pause");
	//saveFiles(data);
	//loadFiles();
	bool keepGoing = true;
	int userInput = 0;
	int monsterID[100]{ 0 };

	cout << "Welcome to Monster Creature Quest!" << endl;
	cout << "" << endl;
	while (keepGoing)
	{
		cout << "What would you like to do?" << endl;
		cout << "" << endl;
		cout << "1) Add a monster by ID" << endl;
		cout << "2) Remove a monster by ID " << endl;
		cout << "3) View a monster by ID " << endl;
		cout << "4) Browse monsters " << endl;
		cout << "5) Exit" << endl;
		cin >> userInput;

		switch (userInput) 
		{
		case 1:
			addMonster(monsterID);
			break;
		case 2:
			removeMonster();
			break;
		case 3:
			viewMonster();
			break;
		case 4:
			browseMonster();
			break;
		case 5:
			keepGoing = false;
			break;
		}
	}



	cout << "Bye!" << endl;

	return 0;
}