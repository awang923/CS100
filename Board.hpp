#ifndef BOARD_H
#define BOARD_H
//#include "Difficulty.hpp"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//class Difficulty;
class Board {
protected:
	std::vector < std::vector<char> > set;
	std::vector < std::vector<char> > displaySet;
	void populate();
public:
	void display();
        Board();
	void run_game();
	friend class difficulty;
};

#endif //BOARD_H
