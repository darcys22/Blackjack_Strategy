#include <card.h>
#include <cstdlib>
#include <string>
//#include <iostream>

Card::Card()
{
	srand(time(0));
}

void Card::Randomize()
{
	Number = (rand()%13);
}

int Card::GetCard()
{
	return Number;
}

bool Card::isAce()
{
	if (Number == 1)
		return true;
	else
		return false;
}

int Card::Value()
{
	int value;
	if (Number == 1)
		return 11;
	else if ( Number == 0 || Number > 10)
		return 10;
	else
		return Number;
} 


std::string Card::CardToString()
{

switch(Number)
{
	case 1:
		return "Ace";
		break;
	case 2:
		return "Two";
		break;
	case 3: 
		return "Three";
		break;
	case 4:
		return "Four";
		break;
	case 5:
		return "Five";
		break;
	case 6:
		return "Six";
		break;
	case 7:
		return "Seven";
		break;
	case 8:
		return "Eight";
		break;
	case 9:
		return "Nine";
		break;
	case 10:
		return "Ten";
		break;
	case 11:
		return "Jack";
		break;
	case 12: 
		return "Queen";
		break;
	case 0:
		return "King";
		break;
	default:
		return "NULL";
		break;
}
}
