#include<iostream>

int * zeroArray(size_t size) 
{
	int *setArray = new int[size];
	for (int i = 0; i < size; i++) 
	{
		setArray[i] = 0;
	}

	return setArray;
	delete[] setArray;
}

int * duplicateArray(int * origArray, size_t size) 
{
	int *newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = origArray[i];
	}

	return newArray;
	delete[] newArray;
}


void loveForNums()
{
	int amountOfNums = 0;
	int userInput = 0;
	std::cout << "Gimme ya best numbers!" << std::endl;
	std::cout << "How many numbers!?" << std::endl;
	std::cin >> amountOfNums;
	int *numbArray = new int[amountOfNums];
	for (int i = 0; i < amountOfNums; i++)
	{
		std::cout << "What's number "<< i+1 << std::endl;
		std::cin >> userInput;
		numbArray[i] = userInput;
	}
	std::cout << "here are your choices!" << std::endl;
	for (int i = 0; i < amountOfNums; i++)
	{
		std::cout << numbArray[i] << std::endl;
	}
}