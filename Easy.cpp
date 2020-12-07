#include <iostream>
#include "Easy.hpp"

Easy::Easy(Board* b){
this->gameBoard = b;
}
bool Easy::difficulty(int xc, int yc){
		xc = gameBoard->x;
		yc = gameBaord->y;
                if (gameBoard->set[0][1] == '*'){
                        if (count = 1){
                                cout << endl << "AaaARrrrGGgghhHH! You hit your second pirate ship, better luck next time!" << endl;    
                                 gameBoard->displayPirate();
                        }
                        else if (count = 0 ){
                                cout << endl << "AaaARrrrGGgghhHH! You hit a pirate ship. Luckily you get one more try!" << endl;
                                count ++;
                                gameBoard->displayPirate();

                        }
                         return false;
                }
                else{
                       gameBoard->displaySet[y][x] = gameBoard->set[y][x];
                        return true;
                }
        }

