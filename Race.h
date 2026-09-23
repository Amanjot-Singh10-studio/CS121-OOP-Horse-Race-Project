#ifndef RACE_H
#define RACE_H
#include "Horse.h"

class Race { 
	private: 
		const static int NUM_HORSES = 5; 
		const static int TRACK_LENGTH = 15; 
		Horse horses[NUM_HORSES]; 
	public: 
		Race(); 
		void start(); 
}; 

#endif
