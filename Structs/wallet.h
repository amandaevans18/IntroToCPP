#pragma once

struct piggyBank
{
	//the number of one dolla bills in piggy bank
	int oneDollaBills;
	// the number of two dolla bills in piggy bank
	int twoDollaBills;
	//the number of quarters in the piggy bank
	int quarters;
	//the number of dimes in the piggy bank
	int dimes;
	//the number of nickels in the piggy bank.
	int nickels;
	//the number of pennies in the piggy bank
	int pennies;
};

// Returns the total monetary value of all dollar bills.
float calcPiggybankNotes(piggyBank piggy);

// Returns the total monetary value of all coins.
float calcPiggybankCoins(piggyBank piggy);

// Returns the total monetary value of the piggybank's contents.
float calcPiggybankTotal(piggyBank piggy);