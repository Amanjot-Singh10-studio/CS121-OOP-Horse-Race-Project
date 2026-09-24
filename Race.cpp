#include <iostream> 
#include <cstdlib> 
#include <ctime>
#include "Race.h"

Race::Race() { 
	for (int horse = 0; horse < NUM_HORSES; horse++) { 
		horses[horse].init(horse, TRACK_LENGTH); 
	} 

} 

void Race::start() {
	srand(time(NULL)); 
	bool keepGoing = true; 
	while (keepGoing) { 
		for (int horse = 0; horse < NUM_HORSES; horse++) { 
			horses[horse].advance(); 
			horses[horse].printLane(); 
			if (horses[horse].isWinner()) { 
				keepGoing = false; 
			} 
		} 
		if (keepGoing) { 
			std::cout << "Press Enter for another turn" << std::endl; 
			std::cin.ignore(); 
		} 
	} 
} 

