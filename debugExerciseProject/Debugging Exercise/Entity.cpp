#include "Entity.h"



Entity::Entity()
{
	health;
}


Entity::~Entity()
{
}

int Entity::attack()
{
	return attackDmg;
}

void Entity::takeDamage(int damage)
{
	health-=damage;
}

bool Entity::isAlive()
{
	if (health > 0) 
	{
		return true;
	}
	else
	{
		return false;
	}
}


