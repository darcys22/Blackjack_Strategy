class Hand extends Card
{
	private Card one, two;

	public Hand
	{
		one.GetCard;
		two.GetCard;
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
