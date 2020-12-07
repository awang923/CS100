#ifndef __DIFFICULTY_HPP__
#define __DIFFICULTY_HPP__
#include "Board.hpp"
class Board; 
class Difficulty{

	protected:
 	    Board* gameBoard;

        public:
	Difficulty(){};
        Difficulty(Board *b):gameBoard(b){}
       	virtual bool difficulty(int, int) =0;

};

#endif       
