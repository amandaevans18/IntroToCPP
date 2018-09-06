#include "television.h"

void Television::increaseVolume()
{
	currentVolume++;
}

void Television::decreaseVolume()
{
	currentVolume--;
}

int Television::volume()
{
	return currentVolume;
}

void Television::increaseChannel()
{
	currentChannel++;
}

void Television::decreaseChannel()
{
	currentChannel--;
}

int Television::channel()
{
	return currentChannel;
}
