#ifndef BOARD_H
#define BOARD_H

#include <vector>
class Board {
protected:
	std::vector < std::vector<char> > set;
	std::vector < std::vector<char> > displaySet;
	
public:
	virtual void display() = 0;
        Board(){}
	friend class difficulty;
};

#endif //BOARD_H
