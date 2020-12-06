#ifndef BOARD_H
#define BOARD_H
//#include "Difficulty.hpp"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "iterator.hpp"
class Board {
   private:
        char XCoor;
        char YCoor;
        void populate();
   protected:
        std::vector < std::vector<char> > set;
        std::vector < std::vector<char> > displaySet;
   public:
        void display();
        Board();
        void getXCoor(char XCoor);
        void getYCoor(char YCoor);
        void run_game();
	void displayPirate();
	int convert();
	void updateBoard();
	bool check();
        friend class difficulty;
};
#endif //BOARD_H


