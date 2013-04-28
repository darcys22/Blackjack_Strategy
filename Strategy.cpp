#include <vector>
using std::vector;

#define DEALER 10 // The dealer can have 10 possible hands
#define SECTION 4 // There are 4 sections to the strategy
#define HIT 0
#define STAND 1
#define DOUBLE 2
#define SPLIT 3


class Strategy()
{
	vector<vector<vector<unsigned char> > > array3D;


	public Strategy()
	{
	
		// Set up sizes. (SECTION x DEALER X HAND)
			array3D.resize(SECTION);
			for (int i = 0; i < SECTION; ++i) 
				array3D[i].resize(DEALER);

		for (int j = 0; j < DEALER; ++j){
			array3D[0][j].resize(9); //Section 1 has 9 possible hands for the player [12-20]
			array3D[1][j].resize(7); //Section 2 has 7 possible hands for the player [5-11]
			array3D[2][j].resize(9); //Section 3 has 9 possible hands for the player [A,2 - A,10]
			array3D[3][j].resize(10);//Section 4 has 10 possible hands for the player [2,2 - A,A]

		// Put the default value of HIT in
			for (int k = 0; k < 9; ++k)
			{
				array3D[0][j][k] = HIT;
				array3D[2][j][k] = HIT;
			}

			for (int k = 0; k < 7; ++k)
				array3D[1][j][k] = HIT;

			for (int k = 0; k < 10; ++k)
				array3D[3][j][k] = HIT;
	

		// 17+ is always a STAND
			for (int j = 0; j < DEALER; ++J)
			{
				for (k = 5; k < 9; ++k)
					array3D[0][j][k] = STAND;
			}

		// 12-16 is STAND if the DEALER < 7
			for (int j = 0; j < 5; ++j)
			{
				for (k = 0; k < 5; ++k)
					array3D[0][j][k] = STAND;
			}
			// UNLESS hand is 12 then you HIT on Dealer with 2 or 3
			array3D[0][0][0] = HIT;
			array3D[0][1][0] = HIT;

		// 10 & 11 is DOUBLE unless the DEALER has and ace
			for (int j = 0; j < (DEALER - 1); ++j)
			{
				for (k = 5; k < 7; ++k)
					array3D[1][j][k] = DOUBLE;
			}

		// Except 10 v dealer 10 is a HIT
			array3D[1][8][5] = HIT;

		// 9 is DOUBLE if the dealer has a 3-6
			for (int j = 1; j < 5; j++)
				array3D[1][j][3] = DOUBLE;

		// A,7 - A,10 is mostly STAND
			for (int j = 0; j < DEALER; ++j)
			{
				for (int k = 5; k < 9; ++k)
					array3D[2][j][k] = STAND;
			}
		// if dealer has 3-6 you mostly DOUBLE with an ACE
			for (int j = 1; j < 5; ++j)
			{
				for (int k = 0; k < 6; ++k)
					array3D[2][j][k] = DOUBLE;
			}

		// With some exceptions to the above
			// if dealer has 9+ you HIT with an ACE
			for (int j = 7; j < DEALER; ++J)
				array3D[2][j][5] = HIT;

			// if the dealer has a 3 you HIT with a kicker lower than 6
			for (int k = 0; k < 4; ++k)
				array3D[2][1][k] = HIT;

			// if the dealer has a 4 you HIT with a kicker lower than 4
			for (int k = 0; k < 2; ++k)
				array3D[2][2][k] = HIT;

		// pocket 7's to pocket aces is mostly SPLIT
			for (int j = 0; j < DEALER; ++j)
			{
				for (int k = 5; k < 10; ++k)
					array3D[3][j][k] = SPLIT;
			}

			// Except you STAND on 10,10
			for (int j = 0; j < DEALER; ++j)
				array3D[3][j][8] = STAND;

			// and you HIT pocket sevens against dealer's 8+
			for (int j = 6; j < DEALER; ++j)
				array3D[3][j][5] = HIT;

			// and pocket nines stands against 7,10,Ace
			array3D[3][5][7] = STAND;
			array3D[3][8][7] = STAND;
			array3D[3][9][7] = STAND;

		// pocket sixes SPLIT vs dealer 3-6
			for (int j = 1; j < 5; ++j)
				array3D[3][j][4] = SPLIT;

		// pocket fives DOUBLE against all but ten and ace
			for (int j = 0; j < (DEALER - 2); ++j)
				array3D[3][j][3] = DOUBLE;

		// finally pocket two's and threes splits against dealer's 3-7
			for (int j = 2; j < 6; ++j)
			{
				for (int k = 0; k < 2; ++k)
					array3D[3][j][k] = SPLIT;
			}
	
	}

	public int CorrectPlay(Board board)
	{
		return (array3D[board.GetSection][board.GetDealer][board.GetHand] + 1)
	}
}
