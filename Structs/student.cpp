#include "student.h"
#include<iostream>

void printStudent(student target)
{
	std::cout << "Student's ID " << target.studentID << std::endl;
	std::cout << "Student's Course " << target.studentCourse << std::endl;
	std::cout << "Student's Score " << target.studentScore << std::endl;
}



int averageTestScore(student studentList[], int size) 
{
	int totalOfScore = 0;
	for (int i = 0; i < size; i++) 
	{
		totalOfScore += studentList[i].studentScore;
		
	}
	return totalOfScore/size;
}

int medianTestScore(student studentList[], int size) 
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; i++) 
		{
			if (studentList[j].studentScore > studentList[j+1].studentScore) 
			{
				temp = studentList[j].studentScore;//part 1 
				studentList[j].studentScore = studentList[j + 1].studentScore;//part 2
				studentList[j + 1].studentScore = temp;//part 3
			}
		}
		
	}
	//checks for an even size
	if (size % 2 == 0)
	{

	}
	else//else its just an odd size
	{

	}
	return 0;
}

int totalNumberPerCourse(int arr[], int size, int looking) 
{

	return 0;
}