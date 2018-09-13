#include<iostream>
#include <string>
#include <random>
#include<time.h>
//First problem was compiling errors

//int main()
//{
//	std::cout << "Provide two numbers and you will be given the sum." << std::endl;
//
//	int numA = -1;
//	int numB = -1;
//	std::cin >> numA >> numB;
//
//	//The first set of output was missing a " before <<
//	std::cout << "The sum of the two numbers is "<< (numA + numB) << "." << std::endl;
//	//also missing a semi colon at the end of return
//	return 0;
//}

//Second was compile and semantic errors

//int main()
//{
//	std::cout << "-=xXx FOUR FUNCTION CALCULATOR PUNCH xXx=-" << std::endl;
//
//	std::cout << "What are your two numbers?" << std::endl;
//
//	double numA = -1.0;
//	double numB = -1.0;
//	double result = -1.0;
//
//	std::cin >> numA >> numB;
//
//	std::cout << "What operation would you like to perform? (+, -, /, *)" << std::endl;
//
//	char operation = ' ';
//	std::cin >> operation;
//	//Not actually using different operations
//	switch (operation)
//	{
//	case '+':
//		result = numA + numB;
//	case '-':
//		result = numA - numB;
//	case '/':
//		result = numA / numB;
//	case '*':
//		result = numA * numB;
//	default:
//		std::cout << "Sorry, that isn't a recognized operation." << std::endl;
//	}
//
//	// Missing a " after was
//	std::cout << "Your final result was "<< result << std::endl;
//
//		return 0;
//}


//Third was compile and semantic errors

//int main()
//{
//	std::string names[10] =
//	{
//		"Terry Nguyen",
//		"Johnny Collins",
//		"Taerrance Tooker",
//		"Kristen Uguudesu",
//		"Nisha Williera",
//		"Davin Jobbson",
//		"Michael Pascal",
//		"Jamison Cardigan",
//		"Charles Hernia",
//		"Reggie Grawcannon"
//	};
//	//need a random seed
//	srand(time(NULL));
//	size_t index = rand() % 10;
//	//Needed a space after is
//	std::cout << "Your random name is " << names[index] << std::endl;
//
//	return 0;
//}

//semantic and compile?

//bool containsValue(int value, int * arr, int arrSize)
//{
//	for (int i = 0; i < arrSize; i)
//	{
//		if (arr[i] == value)
//		{
//			return true;
//		}
//	}
//
//	return false;
//}
//
//int main()
//{
//	int nums[] = { 0, 5, 7, 1, 2, 3 };
//
//	bool result = containsValue(7, nums, 6);
//	//Just use an if to check for either or to print don't do operations in the couts! 
//	if (result == true)
//	{
//		std::cout << "The value was " << result << " was found!" << std::endl;
//	}
//	else 
//	{
//		std::cout << "The value was " << result << " was not found!" << std::endl;
//	}
//	return 0;
//}