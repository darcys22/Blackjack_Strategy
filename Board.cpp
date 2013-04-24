class Board
{

	private Card dealer;
	private Hand hole;
	int mode;

	public Board()
	{
		cout << "What mode would you like to play in?"
		cin >> mode;
		dealer = new Card();
		hole = new Hand(mode);
	}

	public short CorrectPlay(Board b)
	{
	}
}
