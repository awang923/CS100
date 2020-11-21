#ifndef BOARD_H
#define BOARD_H

#include <vector>
class Board {
private:
	std::vector < std::vector<char> > set;
	std::vector < std::vector<char> > displaySet;
	
public:
	void display();
        Board();
	
};

#endif //BOARD_H
