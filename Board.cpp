#include "Board.hpp"
#include <iostream>
#include <vector>
using namespace std;

Board::Board(){
vector <char> seaColumn;
Pcount = 10;

for(int i = 0; i < 10; i++){
	seaColumn.push_back('~');
}

for(int i = 0; i < 10; i++){
	displaySet.push_back(seaColumn);
}	


populate();
}

void Board::display(){
cout << endl<< "Pirate Ships Left: " << this->getCount() << endl<< endl;
cout << "   A B C D E F G H I J " << endl;
for (int i = 0; i < 9; i++){
  cout << i+1 << " |";
  for (int j = 0; j < 10; j++){
	cout << displaySet[i][j] << "|";
  }
  cout << endl;
 }
cout << "10|";
for (int k = 0; k < 10; k++){
	cout << displaySet[9][k] << "|";
}
cout << endl;
}

void Board::displayPirate(){
 cout << "   A B C D E F G H I J " << endl;
 for (int i = 0; i < 9; i++){
       cout << i+1 << " |";
  for (int j = 0; j < 10; j++){
	cout << set[i][j] << "|";
  }
  cout << endl;
 } 
 cout << "10|";
 for (int k = 0; k < 10; k++){
	cout << set[9][k] << "|";
 } 
 cout << endl;
}

void Board::getXCoor(char XCoor){
   cout << "Please enter the X coordinate." << endl;
   cin >> XCoor;
   while (!((XCoor <= 'J' || XCoor <= 'j') && (XCoor >= 'A' || XCoor >= 'a'))){
        cout << "Invalid input. Please enter a character between A and J." << endl;
	cin >> XCoor;
   }
   cout << "Valid input." << endl;
   this->XCoor = XCoor;
}

void Board::getYCoor(int YCoor) {
   cout << "Please enter the Y coordinate." << endl;
   cin >> YCoor;
   bool checkAns;
   while (!(YCoor <= 10 && YCoor >= 1)|| !(cin >> YCoor)){
        cout << "Invalid input. Please enter a number between 1 and 9." << endl;
  	cin.clear();
	cin.ignore(10000,'\n');
	cin >> YCoor;
	break;
   }
   cout << "Valid input" << endl;
   this->YCoor = YCoor;
}

int Board::getCount(){
   return Pcount;
}

int Board::convert(){
   if(this->XCoor == 'A' || this->XCoor == 'a'){
	return 0;
   }
   else if(this->XCoor == 'B' || this->XCoor == 'b'){
        return 1;
   }
   else if(this->XCoor == 'C' || this->XCoor == 'c'){
        return 2;
   }
   else if(this->XCoor == 'D' || this->XCoor == 'd'){
        return 3;
   }
   else if(this->XCoor == 'E' || this->XCoor == 'e'){
        return 4;
   }
   else if(this->XCoor == 'F' || this->XCoor == 'f'){
        return 5;
   }
   else if(this->XCoor == 'G' || this->XCoor == 'g'){
        return 6;
   }
   else if(this->XCoor == 'H' || this->XCoor == 'h'){
        return 7;
   }
   else if(this->XCoor == 'I' || this->XCoor == 'i'){
        return 8;
   }
   else{
	return 9;
   }   
}
void Board::updateBoard(){
   while (this->check()){
      this->display();
    //  this->check();
   }
}

bool Board::getMark(){
   string ans;
   cout << "Do you think there's a pirate ship there?(y/n)" << endl;
   cin >> ans;
   while (!(ans == "y"|| ans == "Y" || ans == "yes" || ans == "Yes" || ans == "n" || ans == "N" || ans == "no" || ans == "No")){
      cout << "Invalid input. Please enter y or n" << endl;
      cin >> ans;
   }
   if (ans == "y"|| ans == "Y" || ans == "yes" || ans == "Yes"){
      return true;
   }
   else{
      return false;
   }
}

bool Board::check(){
   char XCoor;
   int YCoor;
   this->getXCoor(XCoor);
   this->getYCoor(YCoor);
   int x = convert();
   int y = this->YCoor - 1;
if(!getMark()){
   if (set[y][x] == '*'){
     cout << endl << "AaaARrrrGGgghhHH! You hit the pirate ship, better luck next time!" << endl;
     this->displayPirate();
     return false;
   }
   else{
	displaySet[y][x] = set[y][x];
	return true;
   }
}
else{
   displaySet[y][x] = 'P';
   Pcount--;  
}
}

void Board::run_game(){
cout << "T R E A S U R E  H U N T" << endl;
this->display();
this->updateBoard();
}

void Board::populate(){
 vector<char> mt;
 srand(time(NULL));
    for(int i = 0; i < 10 ; i++){
        mt.push_back('0');
    }
    for(int i = 0; i < 10 ; i++){
        set.push_back(mt);
    }
 
    for(int i = 0; i < 10 ; i++){
        int a = rand()%10;
        int b = rand()%10;
        set[a][b] = '*';
    }

for (auto i = 0; i < 10; i++) {
        for(auto j = 0; j < 10; j++){
            if(set[i][j] == '*'){ continue;}
           
            if ( i == 0){
                if(j == 0){
                    int count = 0;
                    if(set[0][1] == '*'){
                        count++;
                    }
                    if(set[1][0] == '*'){
                        count++;
                    }
                    if(set[1][1] == '*'){
                        count++;
                    }
                    set[i][j] += count;
                }
                else if(j == 9){
                    int count = 0;
                    if(set[0][8] == '*'){
                        count++;
                    }
                    if(set[1][9] == '*'){
                        count++;
                    }
                    if(set[1][8] == '*'){
                        count++;
                    }
                    set[i][j] += count;
                }
                else{
                    int count = 0;
                    if(set[i][j-1] == '*'){
                        count++;
                    }
                    if(set[i][j+1] == '*'){
                        count++;
                    }
                    if(set[i+1][j-1] == '*'){
                        count++;
                    }
                    if(set[i+1][j] == '*'){
                        count++;
                    }
                    if(set[i+1][j+1] == '*'){
                        count++;
                    }
                    set[i][j] += count;
                }
            }
           
            else if ( i == 9){
                if(j == 0){
                    int count = 0;
                    if(set[9][1] == '*'){
                        count++;
                    }
                    if(set[8][0] == '*'){
                        count++;
                    }
                    if(set[8][1] == '*'){
                        count++;
                    }
                    set[i][j] += count;
                }
                else if(j == 9){
                    int count = 0;
                    if(set[9][8] == '*'){
                        count++;
                    }
                    if(set[8][9] == '*'){
                        count++;
                    }
                    if(set[8][8] == '*'){
                        count++;
                    }
                    set[i][j] += count;
                }
                else{
                    int count = 0;
                    if(set[i][j-1] == '*'){
                        count++;
                    }
                    if(set[i][j+1] == '*'){
                        count++;
                    }
                    if(set[i-1][j-1] == '*'){
                        count++;
                    }
                    if(set[i-1][j] == '*'){
                        count++;
                    }
                    if(set[i-1][j+1] == '*'){
                        count++;
                    }
                    set[i][j] += count;
                }
            }
            else if(j == 0){
                int count = 0;
                if(set[i-1][0] == '*'){
                    count++;
                }
                if(set[i-1][1] == '*'){
                    count++;
                }
                if(set[i][1] == '*'){
                    count++;
                }
                if(set[i+1][0] == '*'){
                    count++;
                }
                if(set[i+1][1] == '*'){
                    count++;
                }
                set[i][j] += count;
            }
            else if(j == 9){
                int count = 0;
                if(set[i-1][8] == '*'){
                    count++;
                }
                if(set[i-1][9] == '*'){
                    count++;
                }
                if(set[i][8] == '*'){
                    count++;
                }
                if(set[i+1][8] == '*'){
                    count++;
                }
                if(set[i+1][9] == '*'){
                    count++;
                }
                set[i][j] += count;
            }
            else{
                int count = 0;
                if(set[i][j-1] == '*'){
                    count++;
                }
                if(set[i][j+1] == '*'){
                    count++;
                }
                if(set[i-1][j-1] == '*'){
                    count++;
                }
                if(set[i-1][j] == '*'){
                    count++;
                }
                if(set[i-1][j+1] == '*'){
                    count++;
                }
                if(set[i+1][j-1] == '*'){
                    count++;
                }
                if(set[i+1][j] == '*'){
                    count++;
                }
                if(set[i+1][j+1] == '*'){
                    count++;
                }
                set[i][j] += count;
            }
        }
    }
}
