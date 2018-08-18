#include<iostream>
#include "mathUtils.h"
#include<cmath>
int main()
{
	int userInput = 0; // int for square of int problem
	float userInputFir = 0;//float for division
	float userInputSec = 0;//float for division
	//start of hello functions
	helloFunctions();
	//end of hello functions
	//start of square of int
	std::cout << "Choose our number" << std::endl;
	std::cout << "" << std::endl;
	std::cin >> userInput;
	sqrOfInt(userInput);
	//end of square of int
	//start of a divide problem
	std::cout << "Your first Number" << std::endl;
	std::cout << "" << std::endl;
	std::cin >> userInputFir;
	std::cout << "Your second number" << std::endl;
	std::cout << "" << std::endl;
	std::cin >> userInputSec;
	simpleFrac(userInputFir,userInputSec);
	//end of divide problem
	//start of largest diff problem
	largestDiff(1,2,5);

	system("pause");
		return 0;
}
