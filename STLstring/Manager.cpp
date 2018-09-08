#include<iostream>
#include<string>
#include"Manager.h"

using namespace std;

void printEveryOther(string phrase)
{
	int length = phrase.length();
	for (int i = 0; i < length; i+=2) 
	{
		std::cout << phrase[i] << endl;
	}

}

void beStowed(string name)
{
	
	if (name[0] == 'A' || name[0] == 'a') 
	{
		cout << name << " The Amazing" << endl;
	}
	else if (name[0] == 'R'||name[0]=='r') 
	{
		cout << name << " The lit" << endl;
	}
	else 
	{
		cout << "Sorry no title for you " << name << endl;
	}
}

int characterFrequency(string phrase, char toFind) 
{
	int length = phrase.length();
	int repeats = 0;
	for (int i = 0; i < length; i++) 
	{
		if (phrase[i] == toFind) 
		{
			repeats++;
		}
		else 
		{
			
		}
	}
	return repeats;
}

int intstanceCounting(string phrase, string toFindWord)
{
	int repeats = 0;

	for (int i = phrase.find(toFindWord, 0); i != string::npos; i = phrase.find(toFindWord, i)) 
	{
		repeats++;
		i++;
	}

	return repeats;
}


