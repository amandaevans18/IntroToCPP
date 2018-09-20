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

struct Monster 
{
	string idNum;
	string monsterType;
	string monsterLine;

};

void helloWorld();

void loadFiles();

void saveFiles(saveData player);

void addMonster();

void removeMonster();

void viewMonster();

void browseMonster();

void saveToMasterList();