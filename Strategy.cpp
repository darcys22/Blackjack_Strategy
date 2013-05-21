#include <strategy.h>
#include <stdio.h>

const char* const Strategy::strategy[] = 
	{ 	
	// Array for each possible hand. S=stand H=hit D=double P=split
		// PART 1 IF YOU HAVE 12-20
		"SSSSSSSSSS", //20
		"SSSSSSSSSS", //19
		"SSSSSSSSSS", //18
		"SSSSSSSSSS", //17
		"SSSSSHHHHH", //16
		"SSSSSHHHHH", //15
		"SSSSSHHHHH", //14
		"SSSSSHHHHH", //13
		"SSSSSHHHHH", //12

		// PART 2 IF YOU HAVE 5 - 11
		"DDDDDDDDDH", //11
		"DDDDDDDDHH", //10
		"HDDDDHHHHH", //9
		"HHHHHHHHHH", //8
		"HHHHHHHHHH", //7
		"HHHHHHHHHH", //6
		"HHHHHHHHHH", //5
		
		// PART 3 IF YOU HAVE AN ACE
		"SSSSSSSSSS", //10
		"SSSSSSSSSS", //9
		"SSSSSSSSSS", //8
		"SDDDDSSHHH", //7
		"HDDDDHHHHH", //6
		"HHDDDHHHHH", //5
		"HHDDDHHHHH", //4
		"HHHDDHHHHH", //3
		"HHHDDHHHHH", //2

		// PART 4 IF YOU HAVE PAIR
		"PPPPPPPPPP", //ACE
		"SSSSSSSSSS", //10
		"PPPPPHPPHH", //9
		"PPPPPPPPPP", //8
		"PPPPPPPHHH", //7
		"HPPPPHHHHH", //6
		"DDDDDDDDHH", //5
		"HHHHHHHHHH", //4
		"HHPPPPHHHH", //3
		"HHPPPPHHHH", //2
	};

int Strategy::CorrectStrategy(int section, int dealer, int hand)
{
	printf("section: %d, dealer %d, hand %d",section,dealer,hand);
	const int position[] = { 8,15,24,34 };

	const char* temp = strategy[(position[section - 1] - hand)];
	printf(" temp %s", temp);
	return Strat_to_Hand(temp[dealer]);  
};

int Strategy::Strat_to_Hand(const char strat)
{
	switch(strat)
	{
		case 'H':
			return 0;
			break;
		case 'S':
			return 1;
			break;
		case 'D':
			return 2;
			break;
		case 'P':
			return 3;
			break;
		default:
			return -1;
			break;	
	}
};
