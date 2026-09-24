#ifndef HORSE_H
#define HORSE_H

class Horse { 
	private: 
		int position; 
		int horseNum; 
		int trackLength; 
	public: 
		Horse(); 
		void init(int number, int length); 
		void advance(); 
		void printLane(); 
		bool isWinner();
};

#endif 


