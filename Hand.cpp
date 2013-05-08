#include <hand.h>
#include <card.h>
#include <string>

Hand::Hand(int mode)
{
	bool correct_mode = false;
	while(!correct_mode)
	{
		one = new Card;
		two = new Card;
		if (mode = 0 || mode = getMode())
			correct_mode = true;
	}

}

int Hand::getMode()
{
	if (!CheckSplit && !CheckAce && !high)
		return 1;			//Mode one is where the hand value is greater than 11
	
	if (!CheckSplit && !CheckAce && high)
		return 2;			// two is where the hand value is 5-11

	if (!CheckSplit && CheckAce && !high)  
		return 3;			// three is when there is an ace

	if (CheckSplit && !CheckAce && !high)
		return 4;			// four is where you have two of the same cards
}	

bool Hand::CheckSplit()
{
	if(one.CardToString == two.CardToString)
		return true;
	else
		return false;
}	

bool Hand::CheckAce()
{
	if((one.CardToString=="Ace" || two.CardToString == "Ace") && !CheckSplit)
		return true;
	else
		return false;
}

bool Hand::high()
{
	if( (handValue() >= 12) && !CheckAce && !CheckSplit)
		return true;
	else
		return false;
}

int Hand::handValue()
{
	return (one.Value + two.Value);
}

	
string Hand::FirstCard()
{
	return one.CardToString;
}

string Hand::SecondCard()
{
	return two.CardToString;
}
