#ifndef _INTERFACE_H
#define _INTERFACE_H

#include <board.h>

class Interface
{
public:
	Interface();
	void Display(Board);
	int GetPlay();
	void Incorrect(int correct);
	void Correct();
};

#endif
