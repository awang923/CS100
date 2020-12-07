#include "Hard.hpp"
#include <iostream>
  
Hard::Hard(Board* b){
this->gameBoard = b;
}

bool Hard::difficulty(){
                if (gameBoard->set[0][1] == '*'){
                        cout << endl << "AaaARrrrGGgghhHH! You hit the pirate ship, better luck next time!" << endl;
                        gameBoard->displayPirate();
                        return false;
                }
                else{
                        gameBoard->displaySet[y][x] = gameBoard->set[y][x];
                        return true;
                }
        }

