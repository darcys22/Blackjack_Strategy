#ifndef _CARD_H
#define _CARD_H

#include <string>

class Card
{
private:
	int Number;
public:
	Card();
	void Randomize();
	int GetCard();
	bool isAce();
	int Value();
	std::string CardToString();
};
#endif
