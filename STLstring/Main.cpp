#include<iostream>
#include<string>
#include"Manager.h"

using namespace std;

int main() 
{
	string name;
	string phrase;
	char toFind;
	string toFindWord;

	cout << "Whats your phrase" << endl;
	getline(cin,phrase);
	//printEveryOther(phrase);
	
	//system("PAUSE");

	//cout << "Whats your name?" << endl;
	//cin >> name;
	//beStowed(name);

	//cout << "What character do you want to find in your phrase?(It's case sensitive!)" << endl;
	//cin >> toFind;
	//cout << "There are " << characterFrequency(phrase, toFind) <<" "<< toFind << "'s"<<" in your phrase!"<< endl;
	
	cout << "What word do you want to find in your phrase?(It's case sensitive!)" << endl;
	cin >> toFindWord;
	cout << "There are " << intstanceCounting(phrase, toFindWord) << " " << toFindWord << "'s" << " in your phrase!" << endl;


	
	return 0;
}