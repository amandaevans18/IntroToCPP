#include<iostream>
#include "Manager.h"
//walk through with the class

//struct MyStruct
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//};
//void refSum(int a, int b, int& c);
//void refSumStruct(MyStruct& c);

void productOfTwoFloats(float a, float b, float& c);
void swap(float &a, float &b);
int main()
{
//	int myVal = 0;
//	int& myRef = myVal;//these are now the same always regardless of which one you change
//
//	std::cout <<"My Val = " << myVal << std::endl;
//	std::cout <<"My Reference = " << myRef << std::endl;
//
//	myVal = 3;
//	std::cout << "My Val = " << myVal << std::endl;
//	std::cout << "My Reference = " << myRef << std::endl;
//
//	myRef = 4;
//	std::cout << "My Val = " << myVal << std::endl;
//	std::cout << "My Reference = " << myRef << std::endl;
//
//	char b;
//	std::cin >> b;
//	int myC = 0;
//	refSum(1, 2, myC);
//
//	MyStruct origStruct;
//	refSumStruct(origStruct);
//
//	return -1;
	int num = 0;
	int& numRef = num;
	float dec = 0.0f;
	float& decRef = dec;
	bool tf = false;
	bool& tfRef = tf;
	char letter = 'a';
	char& letterRef = letter;
	std::cout << "The Decimal Reference is " << decRef << std::endl;
	productOfTwoFloats(1.2, 1.99, decRef);
	std::cout << "The Decimal Reference is now " << decRef << std::endl;
	float firstVal = 1.1;
	float secondVal = 1.2;
	float& firstRef = firstVal;
	float& secondRef = secondVal;
	std::cout <<"THe first value is "<< firstRef << std::endl;
	std::cout << "the second value is " << secondRef << std::endl;

	swap(firstRef,secondRef);

	std::cout << "THe first value is now " << firstRef << std::endl;
	std::cout << "the second value is now " << secondRef << std::endl;
	
	return 0;
}
//
//void refSum(int a, int b, int& c) 
//{
//	c = a + b;
//}
//
//void refSumStruct(MyStruct& c) 
//{
//	c.a + c.b + c.c;
//
//}

void productOfTwoFloats(float a, float b, float& c) 
{
	c = a + b;
}

void swap(float &a, float &b) 
{
	int temp = 0;
	temp = b;
	b = a;
	a = b;

}