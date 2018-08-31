#include<iostream>
#include"manager.h"
int main() 
{
	//int *age = new int;
	//int *ages = new int[10];

	//int userInput = -1;

	//std::cin >> userInput;
	//int *ages = new int[userInput];

	//delete age;
	//delete[] ages;
	
	int size = 5;
	int arrayA[5] = {1,2,3,4,7};
	std::cout << *zeroArray(size) <<std::endl;

	std::cout << duplicateArray(arrayA,size)<<std::endl;

	loveForNums();
	

	return 0;
}