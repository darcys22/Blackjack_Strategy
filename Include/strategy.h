#ifndef _STRATEGY_H
#define _STRATEGY_H

#define DEALER 10 // The dealer can have 10 possible hands
#define SECTION 4 // There are 4 sections to the strategy
#define HIT 0
#define STAND 1
#define DOUBLE 2
#define SPLIT 3

#include <vector>

class Strategy
{
private: std::vector<std::vector<std::vector<unsigned char> > > array3D;
public:
	Strategy();
	int CorrectStrategy(int section,int dealer,int hand);
};

#endif
