#include<iostream>
#include"Manager.h"

void feedAussie(Aussiegochi & aus)
{
	aus.hunger += 5.0f;

}

void waterAussie(Aussiegochi & aus)
{
	aus.thirst += 5.0f;
}

void abuseAussie(Aussiegochi & aus)
{
	aus.sanity += 5.0f;
}

void coddleAussie(Aussiegochi & aus)
{
	if (aus.happiness >= 100)
	{
		std::cout << "I am too happy leave me alone!" << std::endl;
	}
	else
	{
		std::cout << "Wow thanks..." << std::endl;
		aus.happiness += 5.0f;
	}
}
