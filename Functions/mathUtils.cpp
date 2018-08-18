#include "MathUtils.h"
#include<iostream>
#include<cmath>

void helloFunctions()
{
	std::cout << "Hello Functions" << std::endl;
}

int sqrOfInt(int victim)
{
	int total;
	total = victim*victim;
	std::cout << total << std::endl;
	std::cout << "Your number is now " << total << std::endl;
	return total;
}

float simpleFrac(float a, float b) 
{
	float total = 0;
	total = a / b;
	std::cout <<"Your numbers are now "<< total << std::endl;
	return total;
}

float largestDiff(float a,float b, float c) 
{
	float max = FLT_MIN;
	float min = FLT_MAX;
	int largestDiff = 0;
	if(max<a)
	{
		max = a;
	}
	if (max<b)
	{
		max = b;
	}
	if (max<c)
	{
		max = c;
	}
	if (min>a)
	{
		min = a;
	}
	if (min>b)
	{
		min = b;
	}
	if (min>c)
	{
		min = c;
	}
	largestDiff = max - min;
	std::cout << "WOW THE BIG DIFF IS "<< largestDiff<<std::endl;
	return largestDiff;
}


int distance(int x, int y ,int xsec,int ysec) 
{
	int distance = 0;
	int distancex = (xsec - x) ^ 2;
	int distancey = (ysec - y) ^ 2;
	double calcdistance = sqrt(distancex - distancey);
	return distance;
}

