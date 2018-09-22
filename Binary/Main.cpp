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
	float userInput = 0.0f;


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
		//cleanse your cins
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
		if (userInput == 1)
		{

			addMonster();
		}
		else if(userInput == 2) 
		{
			removeMonster();
		}
		else if (userInput == 3)
		{
			viewMonster();
		}
		else if (userInput == 4)
		{
			browseMonster();
		}
		else if (userInput == 5)
		{
			break;
		}
		else 
		{
			cout << "Try that again bud....." << endl;
		}
	}



	cout << "Bye!" << endl;

	return 0;
}