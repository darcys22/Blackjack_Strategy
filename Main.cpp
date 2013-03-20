//----------------------------------

#include <iostream>
#include <cstdlib>

using namespace std;

//-----------------

int main(int argc, char* argv[])
{
	char cr;
	short int mode;
	
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

	
	while(cr != "q")	
	{
		Interface.Display(new Board(mode)); // Interface.getmode returns the mode to be played in as an integer 1-5,
								// board then creates the dealers and hole cards

		if(Interface.GetPlay != Board.CorrectPlay(Board))
		{
			Interface.Incorrect(Board);
		}
		else
		{
			Interface.Correct;
		}
		cout << "Anykey to continue, q to quit"
		cin.get(cr);
	}
}
