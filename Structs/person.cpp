#include "person.h"
#include<iostream>

void printPerson(person target)
{
	std::cout << "Age " << target.age << std::endl;
	std::cout << "Cashes " << target.cash << std::endl;
	std::cout << "Points " << target.points << std::endl;
}