//----------------------------------

#include <iostream>
#include <cstdlib>
#include <board.h>
#include <interface.h>
#include <string.h>


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

	char cr[2] = "l";
	char check[2] = "q";
	Interface interface;
	while(strcmp(cr, check) != 0)	
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
		std::cout << "Anykey to continue, q to quit";
		std::cin.getline(cr,1);
	}
}
