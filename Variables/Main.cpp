#include <iostream>
#include <time.h>
int main()
{
	/*
	std::cout << "It's a second program!";

	//print variable to my console
	int weightKg = 46;

	std::cout << "Here is my weight: " + weightKg;

	//prompt user for weight
	int userWeightKg = -1;

	std::cout << "What is your weight in kilograms?";//prompt the user

	std::cin >> userWeightKg;//actuallyu exepting the variable

	std::cout << "Wow only " + userWeightKg;//COmpliments




	std::cout << "Closed Exercise" << std::endl;
	std::cout << "" << std::endl;
	//A
	std::cout << "This one will print out A) 14...because that was the last value it was set to" << std::endl; //ansewere
	system("pause");

	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) " << numberA << std::endl;
	system("pause");
	std::cout << "" << std::endl;
	//B
	std::cout << "This second one will print out B) 9 because numberB is what is being printed out and 9 was the last changed value " << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;

	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;
	system("pause");
	std::cout << "" << std::endl;
	//C
	std::cout << "This third one will print out 21 because numberC was set to somethingC which was last set to 21" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;

	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;

	system("pause");
	std::cout << "" << std::endl;
	//D
	std::cout << "This 4th one will print out 3 because that is what somethingD was last set to" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) " << somethingD << std::endl;

	system("pause");
	std::cout << "" << std::endl;
	//E
	std::cout << "this 5th one will print out 6 because it is only an int" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;

	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	system("pause");
	std::cout << "" << std::endl;
	//F
	std::cout << "This 6th one will print out 6.5 because it is a float" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;

	float y = 13;

	y = y / 2;

	std::cout << "F)" << y << std::endl;


	system("pause");
	std::cout << "" << std::endl;

	// Celsius to Fahrenheit)

	std::cout << "We now will be converting Celsius to Fahrenheit" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;


	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f;

	std::cout << "What temp would you like to convert?" << std::endl;
	std::cin >> degCelsius;

	degFahrenheit = degCelsius*1.8 + 32;

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	system("pause");
	std::cout << "" << std::endl;

	//Area of a rectangle

	std::cout << "We now will be telling you the area of a rectangle" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;


	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	std::cout << "Height of your Rectangle?" << std::endl;
	std::cin >> rectHeight;
	std::cout << "Width of your Rectangle?" << std::endl;
	std::cin >> rectWidth;
	std::cout << "Calculating your Area" << std::endl;
	system("pause");
	rectArea=rectWidth*rectHeight;
	std::cout << "Your Area is " << rectArea << std::endl;

	system("pause");
	std::cout << "" << std::endl;

	//OPEN EXERCISES
	//Average of five
	std::cout << "We now will be calculating the average of five numbers" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;

	float a, b, c, d, e;    // Modify these variables below.
	float avg;              // Modify this variable below.
	avg = a = b = c = d = e = 0.0f; // Initialize all to zero.

	std::cout << "Five numbers for your average?" << std::endl;
	std::cin >> a;
	std::cout << "A)" << a << std::endl;
	std::cin >> b;
	std::cout << "B)"<< b << std::endl;
	std::cin >> c;
	std::cout << "C)" << c << std::endl;
	std::cin >> d;
	std::cout << "D)" << d << std::endl;
	std::cin >> e;
	std::cout << "E)" << e << std::endl;

	avg = (a + b + c + d + e) / 5;
	std::cout << "" << std::endl;
	std::cout << "Your Average is " << avg << std::endl;


	system("pause");
	std::cout << "" << std::endl;

	//Number Swaping
	std::cout << "We now will be number swaping right in front of your eyes" << std::endl;//answer
	system("pause");
	std::cout << "" << std::endl;

	int x = 0;
	int y = 0;
	int middleMan;

	std::cout << "What is your x number?" << std::endl;
	std::cin >> x;
	std::cout << "What is your y number" << std::endl;
	std::cin >> y;

	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;

	middleMan =x;
	x = y;
	y = middleMan;

	std::cout << "" << std::endl;
	std::cout << "Number Swap" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;
	*/
	//Fun facts for your age

	//Something extra on the way (limiting what the user can input and sending a message back)
	system("pause");

	std::cout << "Thats all for today! please rate your experiance below from 1 to 5" << std::endl;
	std::cout << "" << std::endl;
	int userRating = 0;
	bool done = false;
	std::cin >> userRating;
	while (done == false)
	{
		if (userRating == 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 10)
		{
			std::cout << "Thanks for rating!" << std::endl;
			done = true;
		}
		else if (userRating == 420)
		{
			std::cout << "lit!" << std::endl;
			done = true;
		}
		else
		{
			std::cout << "Invalid try again!" << std::endl;
			std::cin >> userRating;
		}
	}
	return 0;
}