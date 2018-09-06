#include "Person.h"
#include<iostream>
void Person::Greet()
{
	std::cout << "Hello!" << std::endl;
}

int Person::getCake()
{
	return poundCake;
}

void Person::useCakes(int qty)
{
	poundCake -= qty;
}

void Person::eatMeal()
{

}

int Person::getAge()
{
	return age;
}

