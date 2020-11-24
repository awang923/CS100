#ifndef __DIFFICULTY_HPP__
#define __DIFFICULTY_HPP__
#include "Board.hpp"
class Board; 
class Difficulty{
        public:
        Difficulty(){};
        virtual void difficulty(Board* board) =0;

};

#endif       
