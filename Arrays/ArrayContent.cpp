#include<iostream>
#include"ArrayContent.h"
//
//void initializeToTwo(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = 2;
//	}
//}
//
//
//void printNumbers(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i] << std::endl;
//	}
//}
//
//
//int sumOfArr(int arr[], int size)
//{
//	int total = 0;
//	for (int i = 0; i < size; i++)
//	{
//		total += arr[i];
//	}
//	return total;
//}
//
//int smallestVal(int arr[], int size) 
//{
//	int smallest = INT16_MAX;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < smallest) 
//		{
//			smallest = arr[i];
//		}
//	}
//
//	return smallest;
//}
//
//int largestVal(int arr[], int size)
//{
//	int largest = INT16_MIN;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > largest)
//		{
//			largest = arr[i];
//		}
//	}
//
//	return largest;
//}
//
//
//int findVal(int arr[], int size, int val) 
//{
//	int indexOfVal = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == val) 
//		{
//			indexOfVal = i;
//		}
//	}
//
//	return indexOfVal;
//}
//
//
//int countElement(int arr[], int size,int val)
//{
//	int showInArr = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == val)
//		{
//			showInArr++;
//		}
//	}
//	return showInArr;
//}
//
//
//bool arrayUniqueness(int arr[], int size) 
//{
//	bool unique = false;
//	int occurance = 0;
//	for (int i = 0; i < size; i++)
//	{
//		occurance = 0;
//		for (int z = 0; z < size; z++)
//		{
//			if (arr[i]==arr[z]) 
//			{
//				occurance++;
//			}
//		}
//
//		if (occurance > 1)
//		{
//			unique = false;
//		}
//	}
//
//	return unique;
//}


int reverse(int arr[],int size) 
{

	for (int i = 0; i < size/2; i++)
	{
		int storage = arr[i];
		int storage2 = arr[size-1-i];
		arr[i] = storage2;
		arr[size - 1 - i] = storage;


	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	return 0;
}