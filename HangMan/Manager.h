#pragma once
#include "Manager.h"
#include <iostream>
#include<string>

using namespace std;

void draw(string selectedWord);

bool checkGuess(string selectedWord, char guess);


void display(int tries, string selectedWord,string& storage, char guess);

