#include<iostream>
#include"CatchEmAll.h"

int main() 
{
	char userAnswer = 'Q'; // for multiple choice
	char listOfAnswers[4] = {'A','B','C','D'};
	bool finallyGotIt = false;
	
	while (finallyGotIt == true)
	{
		std::cout << "What is the capital of Washington?" << std::endl;
		std::cin >> userAnswer;
		finallyGotIt = multipleChoiceQuiz(listOfAnswers, userAnswer);
	}
	system("pause");
	return 0;
}