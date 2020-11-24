#ifndef BOARD_H
#define BOARD_H
//#include "Difficulty.hpp"
#include <vector>

class Board {
   private:
        char XCoor;
        char YCoor;
   protected:
        std::vector < std::vector<char> > set;
        std::vector < std::vector<char> > displaySet;
   public:
        void display();
        Board();
        void getXCoor(char XCoor);
        void getYCoor(char YCoor);
        void run_game();
	int convert();
	void markBoard();
        friend class difficulty;
};
#endif //BOARD_H

