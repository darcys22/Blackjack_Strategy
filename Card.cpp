class Card
{
	
	private int Number

	__init
	{
		Number = Random(1..12)
	}

	public int GetCard
	{
		return card;
	}

       public String HandToString
       {
	Switch(int)
		case 1:
			return "Ace"
		case 2:
			return "Two"
		case 3: 
			return "Three"
		case 4:
			return "Four"
		case 5:
			return "Five"
		case 6:
			return "Six"
		case 7:
			return "Seven"
		case 8:
			return "Eight"
		case 9:
			return "Nine"
		case 10:
			return "Ten"
		case 11:
			return "Jack"
		case 12: 
			return "Queen"
		case 13:
			return "King"
        }

} 
