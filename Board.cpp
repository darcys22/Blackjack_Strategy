#include <string>

class Board
{

	private Card dealer;
	private Hand hole;
	private Strategy strategy;

	public Board(int mode)
	{
		strategy = new Stragegy();
		dealer = new Card();
		hole = new Hand(mode);
	}

	public int CorrectPlay()
	{
		return strategy.CorrectPlay(this);
	}
	
	public String DealerCard()
	{
		return dealer.CardToString;
	}

	public String HoleCards()
	{
		String temp;

		temp.append(hole.FirstCard);
		temp.append(" and a ");
		temp.append(hole.SecondCard);
		return temp
	}

	public int GetSection()
	{
		return hole.getMode;
	}

	public int GetDealer()
	{
		return (dealer.Value() - 2);
	}

	public int GetHand()
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
}
