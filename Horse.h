#ifndef HORSE_H
#define HORSE_H

class Horse { 
	private: 
		int position; 
		int index; 
		int trackLength; 
	public: 
		Horse(); 
		void init(int horseIndex, int length); 
		void advance(); 
		void printLane(); 
		bool isWinner();
}; 

#endif 


