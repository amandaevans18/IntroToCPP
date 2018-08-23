#include<iostream>
#include"ArrayContent.h"

int main() 
{
	//The walkthrough
	//int numbers[5];

	//initializeToTwo(numbers, 5);

	//for (int i = 0; i < 5; i++)
	//{
	//	numbers[i] = 0;
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout<< numbers[i] <<std::endl;
	//}

	//the work

	int testArr[5]{ 4, 5, 7, 8, 9 };
	int extraArr[5]{};
	//printNumbers(testArr,6);
	//sumOfArr(testArr,6);
	//smallestVal(testArr,6);
	//largestVal(testArr,6);
	//findVal(testArr, 5, 5);
	//std::cout<<countElement(testArr, 5, 4)<<std::endl;
	//std::cout << arrayUniqueness(testArr, 5) << std::endl;
	reverse(testArr,5);
	system("pause");
	return 0;
}
