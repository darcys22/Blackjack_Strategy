class Board
{

	private Card dealer;
	private Hand hole;
	int mode;

	public Board()
	{
		cout << "What mode would you like to play in?"
		cin >> mode;
		hole.SetMode(mode);
	}

	public short CorrectPlay(Board b)
	{
	}
}
