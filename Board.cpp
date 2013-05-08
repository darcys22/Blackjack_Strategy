#include <board.h>
#include <string>
#include <card.h>
#include <hand.h>
#include <strategy.h>

using namespace std;

Board::Board(int mode)
{
	strategy = new Strategy();
	dealer = new Card();
	hole = new Hand(mode);
}

int Board::CorrectPlay()
{
	return strategy.CorrectStrategy(this);
}

string Board::DealerCard()
{
	return dealer.CardToString;
}

string Board::HoleCards()
{
	string temp;

	temp.append(hole.FirstCard);
	temp.append(" and a ");
	temp.append(hole.SecondCard);
	return temp;
}

int Board::GetSection()
{
	return hole.getMode;
}

int Board::GetDealer()
{
	return (dealer.Value() - 2);
}

int Board::GetHand()
{
	if (hole.getMode = 1)
		return (hole.handValue - 12);
	else if (hole.getMode = 2)
		return (hole.handValue - 5);
	else if (hole.getMode = 3)
		return (hole.handValue - 11 - 2);
	else if (hole.getMode = 4)
		{
		if (hole.handValue = 22)
			return 9;
		else
			return (hole.handValue / 2 - 2);
		}
}
