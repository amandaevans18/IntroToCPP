#include "wallet.h"
#include<iostream>


float calcPiggybankNotes(piggyBank piggy) 
{
	int total = piggy.oneDollaBills + piggy.twoDollaBills;
		return total;
}


float calcPiggybankCoins(piggyBank piggy) 
{
	int total = piggy.dimes + piggy.nickels + piggy.pennies;
		return total;
}



float calcPiggybankTotal(piggyBank piggy) 
{
	int total = piggy.dimes + piggy.nickels + piggy.pennies + piggy.oneDollaBills + piggy.twoDollaBills;
		return total;
}