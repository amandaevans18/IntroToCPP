#include<iostream>
#include<fstream>
#include <string> 
#include"Manager.h"

void digitalPrinter()
{
	std::string userInput;
	std::fstream file;


	std::cout << "What file would you like to open?" << std::endl;
	std::getline(std::cin, userInput);

	file.open(userInput, std::ios_base::in);
	if (!file.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		return;
	}

	std::string buffer;
	while (std::getline(file, buffer))
	{

		std::cout << buffer << std::endl;
	}
	file.close();
}

void myInfo()
{
	//the file binch
	std::fstream file;
	//User input
	std::string fileName;
	std::string name;
	std::string age;
	std::string color;
	std::cout << "Where would you like to save this?" << std::endl;
	std::getline(std::cin, fileName);
	std::cout << "What is your name" << std::endl;
	std::getline(std::cin, name);
	std::cout << "What is your age?" << std::endl;
	std::getline(std::cin, age);
	std::cout << "What is your fav color?"<< std::endl;
	std::getline(std::cin, color);
	file.open(fileName+".txt", std::ios::out);
	if(file.is_open())
	{
		file << name <<std::endl;
		file << age<<std::endl;
		file << color<<std::endl;
		file.flush();
		file.close();
	
	}
	else 
	{
		std::cout << "Failed to open file" << std::endl;
		return;
	}

}

void textCorruption()
{
	std::fstream file;
	

	file.open("textCorruption.txt", std::ios_base::in);
	if (!file.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		return;
	}

	std::string buffer;
	while (std::getline(file, buffer))
	{

		std::cout << buffer << std::endl;
	}
	system("PAUSE");

	std::string messedWith;
	while (std::getline(file, messedWith))
	{

		for (int i = 0; i < messedWith.length(); i++)
		{
			if (messedWith[i] == 'a')
			{
				messedWith[i] = ' ';
			}
			else if (messedWith[i] == 'e')
			{
				messedWith[i] = ' ';
			}
		}

		std::cout << messedWith << std::endl;
	}

	file.close();
}
