#include<iostream>

int main() 
{
	//std::cout << "Good Morning! Today we will be starting off with some Closed Conditionals!" << std::endl;
	//std::cout << "" << std::endl;

	////Problem A (answer)
	//std::cout << "Problem A will spit out 30" << std::endl;
	//std::cout << "" << std::endl;
	//system("pause");
	////problem A (code)
	//int numberA = 15;
	//if (numberA > 10)
	//{
	//	numberA = numberA * 2;
	//}

	//std::cout << "A) " << numberA << std::endl;
	////End of Problem A
	//system("pause");
	//system("CLS");
	////Problem B (answer)
	//std::cout << "Problem B will spit out 15" << std::endl;
	//std::cout << "" << std::endl;
	//system("pause");

	////Problem B code
	//int numberB = 15;
	//if (numberB < 15)
	//{
	//	numberB = numberB * 3;
	//}

	//std::cout << "B) " << numberB << std::endl;
	////End of problem B
	//system("pause");
	//system("CLS");
	////Number Judging(my code only!)
	//std::cout << "Now we will Judge your numbers" << std::endl;
	//std::cout << "" << std::endl;
	//system("pause");

	//int numberOnTrial;

	//std::cout << "Please state a number between 1 and 100!" << std::endl;
	//std::cin >> numberOnTrial;
	//std::cout << "Now Judging" << std::endl;

	//if (numberOnTrial > 50) 
	//{
	//	std::cout << "Wow you choose " << numberOnTrial << " did someone say compensation..." << std::endl;
	//}
	//if(numberOnTrial < 50)
	//{
	//	std::cout << "Wow you choose " << numberOnTrial << " well at least you're being honest.." << std::endl;
	//}
	//if (numberOnTrial==50) 
	//{
	//	std::cout << "Ok you choose " << numberOnTrial << " probs to good to be true.." << std::endl;
	//}
	//std::cout << "Thanks for being judged!" << std::endl;
	////End of num judgements
	//system("pause");
	//system("CLS");
	////Age Gate(My code only lol)
	//std::cout << "Now we will tell you your life choices" << std::endl;
	//std::cout << "" << std::endl;
	//system("pause");

	//int usersAge = 0;

	//std::cout << "Whats your age?" << std::endl;
	//std::cin >>usersAge;
	//std::cout << "Ok so since you are " << usersAge << " you are..." << std::endl;
	//if (usersAge<18)
	//{
	//	std::cout << "You are a minor! (a tiny baby)" << std::endl;
	//}
	//if (usersAge >= 18)
	//{
	//	std::cout << "You are sadly an adult" << std::endl;
	//}
	//if (usersAge >= 50 && usersAge <65)
	//{
	//	std::cout << "You are eligible to join AARP" << std::endl;
	//}
	//if (usersAge >= 65)
	//{
	//	std::cout << "You are eligible for retirement benefits" << std::endl;
	//}

	////end of AGE GATE
	//system("pause");
	//system("CLS");
	////The smallest of three numbers
	//std::cout << "We will now be telling you the smallest of your three numbers" << std::endl;

	//int biggestNum = INT_MAX;
	//int userCurrentNum = 0;
	//int amtOfNum = 3;
	//while (amtOfNum > 0)
	//{
	//	std::cout << "Whats the Number?" << std::endl;
	//	std::cin >> userCurrentNum;
	//	if (userCurrentNum > biggestNum)
	//	{
	//		biggestNum = userCurrentNum;
	//	}
	//	amtOfNum--;
	//}
	//std::cout << "" << std::endl;
	//std::cout << "The Smallest Number was: " << biggestNum << std::endl;
	//// end of smallest of three nums
	//system("pause");
	//system("CLS");
	//
	////Even or odd
	//int userNum;
	//int modedUserNum;
	//std::cout << "Now we will be telling you if your number is odd or even " << std::endl;
	//std::cout << "" << std::endl;

	//std::cout << "Whats the number?" << std::endl;
	//std::cin >> userNum;
	//userNum%= modedUserNum;
	//if (modedUserNum == 0)
	//{
	//	std::cout << "The num is even" << std::endl;
	//}
	//if (modedUserNum == 1)
	//{
	//	std::cout << "The num is odd" << std::endl;
	//}
	////end of even or odd
	//system("pause");
	//system("CLS");

	////Clamp the number
	//std::cout << "Now we will be clamping your number " << std::endl;
	//std::cout << "" << std::endl;
	//int numToClamp = 0;
	//int largerNum = 30;
	//int smallerNum = 15;
	//std::cout << "What is your number?" << std::endl;
	//std::cin >> numToClamp;
	//if (numToClamp <= smallerNum) 
	//{
	//	std::cout << smallerNum << std::endl;
	//}
	//if (numToClamp >= smallerNum)
	//{
	//	std::cout << largerNum << std::endl;
	//}
	////end clamp the number
	//system("pause");
	//system("CLS");

	////COOOKIEES
	//std::cout << "Now we will be taking your cookie orders " << std::endl;
	//std::cout << "" << std::endl;
	//int cookieMult = 23;
	//int cookieOrder = 0;
	//int cookiesServed = 0;

	//std::cout << "How many cookies do you want? ";
	//std::cin >> cookieOrder;

	//if (cookieOrder >= cookieMult)
	//{
	//	cookiesServed = cookieOrder / cookieMult;
	//	std::cout << "You have " << cookiesServed << " cookie orders coming!" << std::endl;
	//}
	//if (cookieOrder < cookieMult)
	//{
	//	std::cout << "NEED MORE COOKIES" << std::endl;
	//}
	//
	////end of cookies
	//system("pause");
	//system("CLS");

	//start of sketch books
	//std::cout << "Now we will be taking your sketchbook orders " << std::endl;
	//std::cout << "" << std::endl;
	//int sketchbookMult = 3;
	//int sketchbookMin = 9;
	//int sketchbookMax = 30;
	//int sketchbookOrder = 0;
	//int sketchbookServed = 0;

	//std::cout << "How many sketchbooks do you want? ";
	//std::cin >> sketchbookOrder;

	//if (sketchbookOrder < sketchbookMin)
	//{
	//	std::cout << "NEED MORE SKETCH" << std::endl;
	//}
	//if (sketchbookOrder > sketchbookMax)
	//{
	//	std::cout << "NEED LESS SKETCH" << std::endl;
	//}
	//if (sketchbookOrder >= sketchbookMult)
	//{
	//	sketchbookServed = sketchbookOrder / sketchbookMult;
	//	std::cout << "You have " << sketchbookServed << " sketchbook orders coming!" << std::endl;
	//}

	//
	////end of sketch books
	//system("pause");
	//system("CLS");

    //MOTION BLURRRR
	char userInput = 'a';
	std::cout << "Would you like to enable Motion blur (Y/N)?" << std::endl;
	std::cin >> userInput;

	if (userInput=='y'||userInput=='Y') 
	{
		std::cout << "Motion blur enabled" << std::endl;
	}
	else if (userInput == 'n' || userInput == 'N')
	{
		std::cout << "Motion blur not enabled" << std::endl;
	}
	else
	{
		std::cout << "ERROR: wrong input" << std::endl;
	}
	//end of motion blur
	system("pause");
	system("CLS");
	
	//four function diposable calc
	float leftNum = 0;
	float rightNum = 0;
	char operations = '!';
	std::cout << "What is the first Number " << std::endl;
	std::cin >> leftNum;
	std::cout << "What is the second Number " << std::endl;
	std::cin >> rightNum;

	if (rightNum==0&& operations =='/') 
	{
		std::cout << "Divsion by zero isn't supported" << std::endl;
	}
	else 
	{
	
	}


	return 0;
}