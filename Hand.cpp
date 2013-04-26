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
			switch(mode)
				case 0:
					correct_mode = true;
					break;
				case 1:
					if (!CheckSplit && !CheckAce && !high)
						correct_mode = true;
						break;
				case 2:
					
					if (!CheckSplit && !CheckAce && high)
						correct_mode = true;
						break;
				case 3:
					
					if (!CheckSplit && CheckAce && !high)
						correct_mode = true;
						break;
				case 4:
					
					if (CheckSplit && !CheckAce && !high)
						correct_mode = true;
						break;
		}

	}

	public bool CheckSplit()
	{
		if(one.CardToString == two.CardToString)
			return true;
		else
			return false;
	}	

	public bool CheckAce()
	{
		if((one.CardToString=="Ace" || two.CardToString == "Ace") && !CheckSplit)
			return true;
		else
			return false;
	}

	public bool high()
	{
		if( (one.Value + two.Value >= 12) && !CheckAce && !CheckSplit)
			return true;
		else
			return false;
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
