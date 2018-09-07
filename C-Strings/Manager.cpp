#include<iostream>
#include<cstring>
#include"Manager.h"
#include <locale> 

void greeting(char name[])
{
	std::cout << "Hello " << name << "!" << std::endl;
}

void favColor(char color[]) 
{
	if (color == "Red") 
	{
		std::cout << "Red is the color of roses" << std::endl;
	}
	else if (color == "Orange") 
	{
		std::cout << "Orange is also a fruit" << std::endl;
	}
	else 
	{
		std::cout << "I've never heard of that color before" << std::endl;
	}
}

void toUpper(char phrase[]) 
{
	int i = 0; //i is interation
	while (phrase[i] != '\0') 
	{
		phrase[i] = toupper(phrase[i]);
		i++;
	}
}

void whiteSpaces(char phrase[]) 
{
	int i = 0;
	char space = ' ';
	while (phrase[i] == '\0' )
	{
		if(phrase[i] == space) 
		{
			phrase[i] = '0';
		}
		i++;
	}
}

void subString(char phrase[]) 
{
	int start = 0;
	int end = 13;
	for (int i = start; i <= end; i++) 
	{
		std::cout << phrase[i];
		
	}
}

int stringLength(char phrase[]) 
{
	int length = 0;
	length = strlen(phrase);
	return length;
}

void stringReversal(char phrase[], char reversed[]) 
{	
	int length = stringLength(phrase);
	//Print out the first time not reservsed
	for (int i = 0; i < length; i++)
	{
		std::cout << phrase[i];
	}
	//the reversed
	for (int i = 0; i < length; i++)
	{
		reversed[length - 1 - i] = phrase[i];
	}
	//gives the phrases a space between
	std::cout << "" << std::endl;
	//print out second time aka revsered
	for (int i = 0; i < length; i++)
	{
		std::cout << reversed[i];
	}
	//gaves a space bewttween
	std::cout << "" << std::endl;
}

void palidromeTest(char phrase[], char reversed[]) 
{
	if (strcmp(phrase,reversed) == true) 
	{
		std::cout << "What a cool phrase" << std::endl;
	}
	else
	{
		std::cout << "What a lame phrase" << std::endl;
	}
}

void shiftCipher(char phrase[]) 
{
	char shifted[100];
	int length = stringLength(phrase);
	int shiftVal = 3;
	for (int i = 0; i < length; i++)
	{
		shifted[i] = tolower(phrase[i]);
		if (shiftVal > 0)
		{
			for (int z = 0; z < length; z++)
			{
				if (shifted[i] > 122 || shifted[i] < 97) 
				{
				
				
				}
				else if (shifted[i] == 122) 
				{
					shifted[i] = 97;
				}
				else 
				{
					shifted[i] += 1;
				}
			}
		}
		else if (shifted[i] < 0) 
		{
			for (int z = 0; z < length; z++)
			{
				if (shifted[i] > 122 || shifted[i] < 97)
				{


				}
				else if (shifted[i] == 122)
				{
					shifted[i] = 122;
				}
				else
				{
					shifted[i] -= 1;
				}
			}
		
		}
		
	}
	// printing gods work
	for (int i = 0; i < length; i++)
	{
		std::cout << shifted[i];
	}
}