#ifndef _STRATEGY_H
#define _STRATEGY_H


class Strategy
{
private: 
	static const char* const strategy[]; 
	int Strat_to_Hand(const char strat);
public:
	int CorrectStrategy(int section,int dealer,int hand);
};

#endif
