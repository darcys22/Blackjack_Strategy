//-------------
#include <interface.h>
#include <iostream>
#include <board.h>

using namespace std;

//------------

void Interface::Display(Board board)
{
	cout << "\nThe dealer shows: ";
	cout << board.DealerCard();
	cout << "\n\nYour hand is: ";
	cout << board.HoleCards();
}

int Interface::GetPlay()
{	
	int play;
	cout << "\n-------\n";
	cout << "Do you (1) Hit, (2) Stand, (3) Double, or (4) Split?";
	cin >> (play - 1);
	return play;
}

void Interface::Incorrect(int correct)
{
	cout << "\nThat play was incorrect, the correct play was to: ";
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
	return;
}

void Interface::Correct()
{
	cout << "\nThat is the correct play";
	return;
}
