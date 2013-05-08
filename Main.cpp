//----------------------------------

#include <iostream>
#include <cstdlib>
#include <board.h>
#include <interface.h>

using namespace std;

//-----------------

int main(int argc, char* argv[])
{
	int mode;
	
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
		board = new Board(mode);
		Interface.Display(board);

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
