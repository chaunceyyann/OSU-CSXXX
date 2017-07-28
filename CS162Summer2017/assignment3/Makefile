# This is a comment line
# Sample makefile for fraction class

main: mainGame.cpp creature.cpp creature.h vampire.cpp vampire.h medusa.cpp medusa.h bubba.cpp bubba.h
	g++ mainGame.cpp creature.cpp vampire.cpp medusa.cpp bubba.cpp -o AttackNdefend

test: mainGame.cpp creature.cpp creature.h vampire.cpp vampire.h medusa.cpp medusa.h bubba.cpp bubba.h
	g++ mainGame.cpp creature.cpp vampire.cpp medusa.cpp bubba.cpp && ./a.out

all: 
	make main && make clean

clean:
	rm -f a.out
