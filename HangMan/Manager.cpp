#include "Manager.h"
#include <iostream>
#include<string>

using namespace std;

void draw(string selectedWord)
{
	int length = selectedWord.length();
	cout <<"The word is "<< length <<" long"<< endl;
	for (int i = 0; i < length; i++)
	{
		cout << "_ ";
	}
	cout <<""<<endl;
}

bool checkGuess(string selectedWord, char guess)
{
	int counter = 0;
	int length = selectedWord.length();
	for (int i = 0; i < length; i++) 
	{
		if (selectedWord[i] == guess)
		{
			counter++;
		}
		else if(selectedWord[i] != guess)
		{
		}
	}

	if (counter > 0) 
	{
		cout << "NICe" << endl;
		return true;
	}
	else
	{
		cout << "not nice" << endl;
		return false;
	}

}


void display(int tries, string selectedWord,string& storage, char guess)
{
	int length = selectedWord.length();
	char guessStor = guess;
	for (int i = 0; i < length; i++) 
	{
		//We need to display the character guessed as well
		if (selectedWord[i] == guess) 
		{
			storage[i]= guessStor;
		}
		else if(storage[i] < 97 && storage[i] > 122)
		{
			storage[i] = '_';
		}
	}

	cout << storage;

	cout << "" << endl;
	cout <<"You have " << tries <<" left" <<endl;
}