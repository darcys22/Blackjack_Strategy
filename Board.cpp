#include <string>

class Board
{

	private Card dealer;
	private Hand hole;
	private	int mode;

	public Board()
	{
		cout << "What mode would you like to play in?"
		cin >> mode;
		dealer = new Card();
		hole = new Hand(mode);
	}

	public short CorrectPlay()
	{
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
		return mode;
	}

	public int GetDealer()
	{
		return (dealer.Value() - 2);
	}

	public int GetHand()
	{
		return 0 //A value that fits into the strategy array
	}
}
