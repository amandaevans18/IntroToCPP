#include<iostream>
#include<string>
#include"Manager.h"

using namespace std;

int main()
{
	//list of fruits for my word search!
	string wordList[10] = {"ray","pears","mangos","peaches","jackfruit","bananas","melons","grapefruits","avocado","oranges"};
	string wordBeingUsed;
	
	//Code to pick which word to use and set it to used word

	//this makes it a rand number from ten to one
	int randomNumber = rand() % 10;
	wordBeingUsed = wordList[randomNumber - 1];
	//The test BOI
	//wordBeingUsed = wordList[0];
	
	//The character the player guesses
	char letterGuess;
	bool check;
	int tries = 10;
	int length = wordBeingUsed.length();
	string storage(length,' ');
	draw(wordBeingUsed);
	
	while (check = true)
	{
		cout << "Whats your guess?" << endl;
		cin >> letterGuess;
		letterGuess = tolower(letterGuess);
		check = checkGuess(wordBeingUsed, letterGuess);
		if (check != true)
		{
			tries--;
		}
		display(tries, wordBeingUsed, storage, letterGuess);
		if (tries <= 0) 
		{
			check = false;
		}
		if (storage == wordBeingUsed) 
		{
			cout << "You won!" << endl;
			break;
		}
	}
	return 0;
}