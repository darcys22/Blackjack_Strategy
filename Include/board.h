#ifndef _BOARD_H
#define _BOARD_H

#include <string>
#include <card.h>
#include <hand.h>
#include <strategy.h>

class Board
{
private:
 	Card dealer;
	Hand hole;
	Strategy strategy;
	int GetSection();
	int GetDealer();
	int GetHand();
public:
	Board(int mode);
	int CorrectPlay();
	std::string DealerCard();
	std::string HoleCards();
};
#endif
