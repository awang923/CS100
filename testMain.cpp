#include "Board.hpp"
#include "Difficulty.hpp"
#include "Easy.hpp"

int main(){
  Board* testB = new Board();
  testB->setDiffy(new Easy(testB));
  testB->check();
  cout << "X coordinate: " << testB->x << endl;
  cout << "Y coordinate: " << testB->y << endl;
  return 0;
}
