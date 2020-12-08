#include <iostream>
#include "Easy.hpp"

Easy::Easy(Board* b){
this->gameBoard = b;
}
bool Easy::difficulty(int xc, int yc){
		int s = this->count;
		xc = gameBoard->x;
		yc = gameBoard->y;
                if (gameBoard->set[yc][xc] == '*'){
                        if (this->count == 1){
                                cout << endl << "AaaARrrrGGgghhHH! You hit your second pirate ship, better luck next time!" << endl;    
                                 gameBoard->displayPirate();
				 return false;
                        }
                        else if (this->count == 0 ){
                                cout << endl << "AaaARrrrGGgghhHH! You hit a pirate ship. Luckily you get one more try!" << endl;
                                this->count++;
				gameBoard->displaySet[yc][xc] = gameBoard->set[yc][xc];
                               // gameBoard->display();
				return true;

                        }
		  	return true;

                }
                else{
                       gameBoard->displaySet[yc][xc] = gameBoard->set[yc][xc];
                        return true;
                }
        }

