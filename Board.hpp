#ifndef BOARD_H
#define BOARD_H
//#include "Difficulty.hpp"
#include <vector>
//class Difficulty;
class Board {
protected:
	std::vector < std::vector<char> > set;
	std::vector < std::vector<char> > displaySet;
	
public:
	void display();
        Board();
	void run_game();
	friend class difficulty;
};

#endif //BOARD_H
