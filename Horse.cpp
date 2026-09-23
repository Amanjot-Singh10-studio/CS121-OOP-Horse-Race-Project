#include <iostream>
#include <cstdlib>
#include "Horse.h"

Horse::Horse() {
	position = 0; 
	index = 0; 
	trackLength = 15; 
} 

void Horse::init(int HorseIndex, int length) { 
	index = HorseIndex; 
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
			std::cout << index; 
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
		std::cout << "Horse " << index << " Win's!" << std::endl; 
	}
	return won; 
} 
