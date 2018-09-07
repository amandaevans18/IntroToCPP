#include "Server.h"
#include<iostream>
bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	if (serverCount <= 49)
	{
		servers[serverCount] = newServer;
		serverCount++;
		return true;
	}
	else
	{
		return false;
	}

}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize)
{
	int count = serverCount;
	int maxResults = 0;
	int pingLimit = 0;
	int regionSpecf = 0;
	bool allowEmptyServers = false;
	
	for (int l = 0; l < dstSize; l++)
	{
		dstArray[l].regionID = servers[l].regionID;
		dstArray[l].currentPlayerCount = servers[l].currentPlayerCount;
		dstArray[l].maxPlayers = servers[l].maxPlayers;
		dstArray[l].ping = servers[l].ping;
		count++;
	}

	for (int i = 0; i < dstSize; i++)
	{
		std::cout << "Region ID: " << dstArray[i].regionID << std::endl;
		std::cout << "Current number of players: " << dstArray[i].currentPlayerCount << std::endl;
		std::cout << "Max players: " << dstArray[i].maxPlayers << std::endl;
		std::cout << "Ping: " << dstArray[i].ping << std::endl;
	}
	return count;
}

int ServerBrowserService::browserFiltering(ServerInfo * dstArray)
{

	return 0;
}