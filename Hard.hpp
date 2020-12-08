#ifndef HARD_HPP
#define HARD_HPP

#include "Board.hpp"
#include "Difficulty.hpp"
#include <iostream>
#include <vector>
using namespace std;
class Board;
class Hard: public Difficulty{
        public:
		Hard(Board*);
		virtual bool difficulty(int, int);
};
#endif //HARD_CPP
