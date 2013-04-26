//----------------------------------

#include <iostream>
#include <cstdlib>

using namespace std;

//-----------------

int main(int argc, char* argv[])
{

	
	if (argc > 1)
	{
		cout << "Too many Arguments";
		exit;
	}
	else if (argc = 0)
	{
		mode = 0;
	}
	else
	{
		mode = atoi(argv[1]);
	}	

	
	while(char cr != "q")	
	{
		board = new Board();
		Interface.Display(board)// Interface.getmode returns the mode to be played in as an integer 1-5,
								// board then creates the dealers and hole cards

		if(Interface.GetPlay != board.CorrectPlay())
		{
			Interface.Incorrect(board.CorrectPlay());
		}
		else
		{
			Interface.Correct;
		}
		cout << "Anykey to continue, q to quit"
		cin.get(cr);
	}
}
