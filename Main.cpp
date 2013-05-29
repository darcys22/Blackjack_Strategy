//----------------------------------

#include <iostream>
#include <cstdlib>
#include <board.h>
#include <interface.h>
#include <string.h>
#include "BufferToggle.cpp"


//-----------------

int main(int argc, char* argv[])
{
	int mode;
	
	if (argc > 2)
	{
		std::cout << "Too many Arguments";
		(void)exit;
	}
	else if (argc == 1)
	{
		mode = 0;
	}
	else
	{
		mode = atoi(argv[0]);
	};	

	BufferToggle bt;
	Interface interface;
	char ch = ' ';
	while(ch != 'q')	
	{
		Board board(mode);
		interface.Display(board);

		if(interface.GetPlay() != board.CorrectPlay())
		{
			interface.Incorrect(board.CorrectPlay());
		}
		else
		{
			interface.Correct();
		}
		std::cout << "\nAnykey to continue, q to quit";
		std::cout << "\n---------------\n";
		ch = bt.read();
	}
}
