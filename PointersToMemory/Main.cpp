#include<iostream>
#include<cstdlib>

int getFirstNum(int *arr) 
{
	return arr[0];
	
}

void printAnArrayOfFloats(float *arr , int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

int sumOfIntArray(int *arr, int size)
{
	int total = 0;
	for(int i=0; i<size;i++)
	{
		total = arr[i] + total;
	}
	return total;
}

void intializeArrayOfBools(bool *arr, int size,bool defaultVal)
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = defaultVal;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void intSubArray(int *arr,int *emptyArr ,int highIndex, int lowIndex)
{
	int resetIndexes = 0;
	for (int i = lowIndex; i < highIndex; i++) 
	{
		emptyArr[resetIndexes] = arr[i];
			resetIndexes++;
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout<<emptyArr[i]<<std::endl;
	}
}

char *findChar(char* arr, int size, char target) 
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == target)
		{
			return &arr[i];
			//return &(arr[i]);
		}
	}
	return nullptr;
}

void swapPointers(int valA,int valB, int *pointA, int *pointB) 
{
	*pointA = valA;
	*pointB = valB;
}

int main()
{
	//walkthrough

	//int coffeCup = 0;
	//int *pointer = &coffeCup;
	//std::cout << coffeCup << std::endl;
	//std::cout << pointer << std::endl;
	//std::cout << *pointer << std::endl;
	//coffeCup = 3;
	//std::cout << coffeCup << std::endl;
	//std::cout << pointer << std::endl;
	//std::cout << *pointer << std::endl;
	//*pointer = 7;

	//std::cout << coffeCup << std::endl;
	//std::cout << pointer << std::endl;
	//std::cout << *pointer << std::endl;

	//closed exercies

	//int numbersList[] = {0,1,4,99,90};
	////int gummyBear = 5;
	////int val = getFirstNum(&gummyBear);
	//float numbers[] = {1.1, 2.2 , 3.7 , 7.8, 9.99};
	//int size = 5;
	//printAnArrayOfFloats(numbers, size);
	//
	//std::cout << sumOfIntArray(numbersList, size) << std::endl;
	//bool conditions[]{ true,true,false,true,false };
	//bool conditionWanted = false;
	//intializeArrayOfBools(conditions, size,conditionWanted );

	//first open

	//int size = 6;
	//int lowIndex = 0;
	//int highIndex = 0;
	//int numbers[] = {4,1,2,3,3,4};
	//int emptyNums[4] = {};
	//std::cout << "Your current array is "  << std::endl;
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout<<numbers[i];
	//}
	//std::cout << "Choose what numbers you want in the new array by choosing the index's you want to keep (there must still be at least 4 numbers included)" << std::endl;
	//std::cout << "Whats the first index" << std::endl;
	//	std::cin >> lowIndex;
	//std::cout << "Whats the second index" << std::endl;
	//	std::cin >> highIndex;

	//second open

	//char theLetter = 'g';
	//char letter[5]{ 'g','E','f','l','o' };
	//int size = 5;
	//std::cout<<*findChar(letter, size, theLetter)<<std::endl;

	//third open

	//int val = 2;
	//int otherVal = 4;
	//int * a = &val;
	//int * b = &otherVal;
	//swapPointers(val,otherVal,a,b);


	return 0;
}