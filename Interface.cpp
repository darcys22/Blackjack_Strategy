//-------------

#include <iostream>

using namespace std;

//------------

class Interface
{

	public void Display(Board board)
	{
	}

	public short GetPlay
	{
	}

	public void Incorrect(short int correct)
	{
		cout << "That play was incorrect, the correct play was to: ";
		switch(correct)
		{
			case 0:
				cout << "hit";
				break;
			case 1:
				cout << "stand";
				break;
			case 2:
				cout << "double down";
				break;
			case 3:
				cout << "split";
				break;
		}
	}
	
	public void Correct
	{
		cout << "That is the correct play"
	}
}
