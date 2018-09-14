#include<iostream>
#include<fstream>
#include <string> 
#include"Manager.h"
int main() 
{

	std::fstream file;
	//exAmple

	//file.open("paul.txt", std::ios::out);
	//if(!file.is_open())
	//{
	//	std::cout << "Failed to open file" << std::endl;
	//	return -1;
	//
	//}
	//file << "Hello Paul";
	//file.flush();
	//file.close();

	//digitalPrinter();
	//myInfo();
	textCorruption();
	
	return 0;
}