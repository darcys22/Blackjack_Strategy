#ifndef _HAND_H
#define _HAND_H

#include <string>
#include <card.h>

class Hand
{
private: Card one, two;
public:

	Hand();
	int getMode();
	bool CheckSplit();
	bool CheckAce();
	bool high();
	int handValue();
	std::string FirstCard();
	std::string SecondCard();
}

#endif
