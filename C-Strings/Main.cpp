#include<iostream>
#include<cstring>
#include"Manager.h"
int main() 
{
	char name[50];
	char color[50];
	char phrase[100];
	char reversedPhrase[100];
	//std::cout << "WHat is your name?" << std::endl;
	//std::cin >> name;
	//std::cout << "So your name is "<< name << std::endl;
	//greeting(name);

	//std::cout << "What's your favorite color?" << std::endl;
	//std::cin >> color;
	//favColor(color);

	//std::cout << "Whats your phrase?" << std::endl;
	//std::cin >> phrase;
	//toUpper(phrase);

	//std::cout << "Whats your phrase?" << std::endl;
	//std::cin >> phrase;
	//whiteSpaces(phrase);
	
	//std::cout << "Whats your phrase?" << std::endl;
	//std::cin.getline(phrase,100);
	//subString(phrase);

	std::cout << "Whats your phrase?" << std::endl;
	std::cin.getline(phrase, 100);
	//std::cout<< stringLength(phrase)<<std::endl;
	//stringReversal(phrase, reversedPhrase);
	//palidromeTest(phrase, reversedPhrase);
	shiftCipher(phrase);


	return 0;
}