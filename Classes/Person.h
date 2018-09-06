#pragma once
class Person 
{
private:
	int age = 25;
	int poundCake = 10;
	

public:
	void Greet();
	int getCake();
	void useCakes(int qty);
	void eatMeal();
	int getAge();
	int health = 100;

};