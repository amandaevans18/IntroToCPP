// A Debugging Exercise by Marc Chee (marcc@aie.edu.au)
// 18/12/2016

// Marines are trying to "de-bug" an area (haha . . . haha)
// However something's up with this code . . . figure out what's going wrong
// When you're finished, there should be no compiler errors or warnings
// The encounter should also run and finish correctly as per the rules in the comments

// In many cases there are differences between what's in otherwise identical sections
// for Marines and Zerglings. It's good to be able to tell what the differences are
// and why they might be important.

// What's efficient and inefficient? Why?
// What uses more memory and what doesn't? Why?

// Last modified by Terry Nguyen (terryn@aie.edu.au)
// 10/09/2018

#include <iostream>
#include "Marine.h"
#include "Zergling.h"

using std::cout;
using std::endl;



int main()
{
	Marine squad[10];
	Zergling swarm[20];
	int squadSize = 10;
	int swarmSize = 20;
	bool gameGo = true;
	int nextSwarm = 0;
	int nextSquad = 0;
	cout << "A squad of marines approaches a swarm of Zerglings and opens fire! The Zerglings charge!" << endl;
	// Attack each other until only one team is left alive
	while (gameGo == true) // If anyone is left alive to fight . . .
	{
		if (squad->isAlive()) // if there's at least one marine alive
		{
			for (size_t i = 0; i < squadSize; i++) // go through the squad
			{
					// each marine will attack the first zergling in the swarm
				cout << "A marine fires for " << squad[i].attack() << " damage. " << endl;
				// For testing cout << "Marine " << i << endl;
				int damage = squad[i].attack();
				if (swarm[0+nextSwarm].isAlive())
				{
					std::cout << "Zerg took damage" << std::endl;
					swarm[0+nextSwarm].takeDamage(damage);
				}
				else if (!swarm[0+nextSwarm].isAlive())
				{
					nextSwarm++;
					std::cout << "The Zerg is dead" << std::endl;
				}
			}
		}
		if (swarm->isAlive()) // if there's at least one zergling alive
		{
			for (size_t i = 0; i < squadSize; i++) // loop through zerglings
			{
				cout << "A zerg attacks for " << swarm[i].attack() << " damage. " << endl;
				//For testing cout << "Zerg " << i << endl;
				int damageForZerg = swarm[i].attack();
				if (squad[0+nextSquad].isAlive())
				{
					cout << "A Marine took damage" << endl;
					squad[0+nextSquad].takeDamage(damageForZerg);
				}
				else if(!squad[0+nextSquad].isAlive())
				{
					nextSquad++;
					cout << "The marine succumbs to his wounds." << endl;
				}
	
			}
		}
		if(!swarm->isAlive())
		{
			cout << "The Marines win." << endl;
			gameGo = false;
		}
		if (!squad->isAlive())
		{
			cout << "The Zerg win." << endl;
			gameGo = false;
		}
	}
	return 0;
}

