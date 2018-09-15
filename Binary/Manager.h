#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct saveData
{
	std::string playerName;
	int deathCount;
	int deepestFloor;

	bool hasBeenBeatenGame;

	double timePlayed;  // given in seconds
};

struct monsters 
{
	string monsterID;
	string line;
	
};

void helloWorld();

void loadFiles();

void saveFiles(saveData player);

void addMonster(int idArr[]);

void removeMonster();

void viewMonster();

void browseMonster();