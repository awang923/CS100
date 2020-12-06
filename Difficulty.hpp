#ifndef __DIFFICULTY_HPP__
#define __DIFFICULTY_HPP__
#include "Board.hpp"
class Board; 
class Difficulty{

	private:
 	    Board* gameBoard;

        public:
            Difficulty(Board *b):gameBoard(b){};
       	virtual bool difficulty() =0;

};

#endif       
