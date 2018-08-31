#include<iostream>
#include"CatchEmAll.h"


bool multipleChoiceQuiz(char list[],char answer) 
{
	for (int i = 0; i < 5; i++) 
	{
		if (answer == list[i])
		{
			std::cout << "ConGrats" << std::endl;
			return true;
		}
		else
		{
			std::cout << "You failed!" << std::endl;
			return false;
		}
	}
}


void printMultiplesOfFive() 
{

}