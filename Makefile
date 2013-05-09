CC = gcc -c -IInclude

poker : board.o card.o hand.o interface.o main.o strategy.o
	ld -o poker Board.o Card.o Hand.o Interface.o Main.o Strategy.o -lc

main.o : Main.cpp
	$(CC) Main.cpp

board.o : Board.cpp
	$(CC) Board.cpp

card.o : Card.cpp
	$(CC) Card.cpp

interface.o : Interface.cpp
	$(CC) Interface.cpp

strategy.o : Strategy.cpp
	$(CC) Strategy.cpp

hand.o : Hand.cpp
	$(CC) Hand.cpp


clean :
	rm Main.o Board.o Card.o Interface.o Strategy.o Hand.o
