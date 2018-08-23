#include<iostream>
#include "person.h"
#include"wallet.h"
#include "student.h"

int main() 
{
	//person paul{};
	//person john{15,1000,20};

	//printPerson(john);

	//system("pause");
	//system("CLS");

	//piggyBank mine{1,2,3,4,5,6};
	//piggyBank your{0,0,0,0,0,0};

	student Ray{79,3,100};
	printStudent(Ray);
	student Amanda{ 68,3,37 };
	printStudent(Amanda);
	student Forrest{19,2,99};
	printStudent(Forrest);

	student studentList[3]{ Ray,Amanda,Forrest };

	std::cout<<"THE AVERAGE "<<averageTestScore(studentList,3)<<std::endl;
	std::cout << "thE median " << medianTestScore(studentList, 3) << std::endl;

	system("pause");
	return 0;
}
