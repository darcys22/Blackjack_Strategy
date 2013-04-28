class Hand extends Card
{
	private Card one, two;

	public Hand(int mode)
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
	
	public int getMode()
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

	private bool CheckSplit()
	{
		if(one.CardToString == two.CardToString)
			return true;
		else
			return false;
	}	

	private bool CheckAce()
	{
		if((one.CardToString=="Ace" || two.CardToString == "Ace") && !CheckSplit)
			return true;
		else
			return false;
	}

	private bool high()
	{
		if( (handValue() >= 12) && !CheckAce && !CheckSplit)
			return true;
		else
			return false;
	}

	public int handValue()
	{
		return (one.Value + two.Value);
	}
	
		
	public String FirstCard()
	{
		return one.CardToString;
	}

	public String SecondCard()
	{
		return two.CardToString;
	}

}
