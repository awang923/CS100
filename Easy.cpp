#ifndef __EASY_CPP__
#define __EASY_CPP__

#include "Board.hpp"
#include "Difficulty.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Difficulty: public Easy {
	private:
	int count =0;
	public:
	 	Easy() : Difficulty() {};
		Hard(Board* b) : Difficulty(b) {};
		 int y = YCoor -1;
             //int x = XCoor[1] - 97;
                 int x = convert(XCoor);
            
		void bool difficulty (){
                if (gameBoard->set[0][1] == '*'){
			if (count = 1){
                        	cout << endl << "AaaARrrrGGgghhHH! You hit your second pirate ship, better luck next time!" << endl;    
                       		 this->displayPirate();
			}
			else if (count = 0 ){
				cout << endl << "AaaARrrrGGgghhHH! You hit a pirate ship. Luckily you get one more try!" << endl;   
                        	count ++; 
				this->displayPirate();	
			
			}
			 return false;
                }       
                else{
                        displaySet[y][x] = set[y][x];
                        return true;
                }
        }
}:



#endif
