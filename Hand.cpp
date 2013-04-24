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

	public Card GetCards
	{
		return Card one, two;
	}

	public bool CheckSplit
	{
		if(one == two)
			return true;
		else
			return false;
	}	

	public bool CheckAce
	{
		if((one==1 || two == 1) && !CheckSplit)
			return true;
		else
			return false;
	}

	public bool high
	{
		if( (one+two >= 12) && !CheckAce && !CheckSplit)
			return true;
		else
			return false;
	}

}
