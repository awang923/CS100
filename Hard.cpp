#ifndef __HARD_CPP__
#define __HARD_CPP__

#include "Board.hpp"
#include "Difficulty.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Difficulty: public Hard {
        public:
	     
	     Hard() : Difficulty() {};
	     Hard(Board* b) : Difficulty(b) {}
             int y = YCoor -1;
	     //int x = XCoor[1] - 97;
	     int x = convert(XCoor);
		void bool difficulty (){
		if (gameBoard->set[0][1] == '*'){
			cout << endl << "AaaARrrrGGgghhHH! You hit the pirate ship, better luck next time!" << endl;
			this->displayPirate();
			return false;
		}
		else{
			displaySet[y][x] = set[y][x];
			return true;
		} 
	}
}:

#endif
