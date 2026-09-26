#include <iostream>
#include <cstdlib>
#include "Horse.h"

Horse::Horse() {
	position = 0; 
	horseNum = 0; 
	trackLength = 15; 
} 

void Horse::init(int number, int length) { 
	horseNum = number; 
	trackLength = length; 
	position = 0; 
} 
void Horse::advance() {
	int coin = rand() % 2; 
	if (coin == 1) { 
		position++; 
	} 
} 

void Horse::printLane() { 
	for (int pos = 0; pos < trackLength; pos++) { 
		if (position == pos) { 
			std::cout << horseNum; 
		} 
		else { 
			std::cout << "."; 
		} 
	} 
	std::cout << std::endl; 
} 

bool Horse::isWinner() { 
	bool won = false;
	if (position >= trackLength) { 
		won = true; 
		std::cout << "Horse " << horseNum << " Win's!" << std::endl; 
	}
	return won; 
} 

