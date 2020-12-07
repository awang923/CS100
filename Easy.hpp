#ifndef EASY_HPP
#define EASY_HPP

#include "Board.hpp"
#include "Difficulty.hpp"
#include <iostream>
#include <vector>
using namespace std;
class Board;
class Easy: public Difficulty{
	private:
	int count = 0;
	public:
		Easy(Board* b);
		virtual bool difficulty(int, int);
};
#endif //EASY_HPP
