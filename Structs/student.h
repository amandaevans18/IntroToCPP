#pragma once

struct student
{
	//the students ID number
	int studentID;
	//the course number the student is taking
	int studentCourse;
	//students score on the last exam
	int studentScore;
};

void printStudent(student target);

//average test score for all students in the array
int averageTestScore(student studentList[], int size);

int medianTestScore(student studentList[], int size);

//the total number of students enrolled in the same course
int totalNumberPerCourse(int arr[], int size, int looking);