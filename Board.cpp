#include "Board.hpp"
#include <iostream>
#include <vector>
using namespace std;

Board::Board(){
vector <char> column1;
vector <char> column2;
vector <char> column3;
vector <char> column4;
vector <char> column5;
vector <char> column6;
vector <char> column7;
vector <char> column8;
vector <char> column9;
vector <char> column10;
vector <char> seaColumn;


for(int i = 0; i < 10; i++){
	seaColumn.push_back('~');
}

for(int i = 0; i < 10; i++){
	displaySet.push_back(seaColumn);
}	

column1.push_back('1');
column1.push_back('1');
column1.push_back('2');
column1.push_back('1');
column1.push_back('1');
column1.push_back('0');
column1.push_back('0');
column1.push_back('0');
column1.push_back('0');
column1.push_back('0');

column2.push_back('1');
column2.push_back('*');
column2.push_back('2');
column2.push_back('*');
column2.push_back('1');
column2.push_back('1');
column2.push_back('1');
column2.push_back('1');
column2.push_back('0');
column2.push_back('0');

column3.push_back('2');
column3.push_back('2');
column3.push_back('3');
column3.push_back('1');
column3.push_back('1');
column3.push_back('1');
column3.push_back('*');
column3.push_back('1');
column3.push_back('0');
column3.push_back('0');

column4.push_back('1');
column4.push_back('*');
column4.push_back('1');
column4.push_back('0');
column4.push_back('1');
column4.push_back('2');
column4.push_back('3');
column4.push_back('2');
column4.push_back('1');
column4.push_back('0');

column5.push_back('1');
column5.push_back('2');
column5.push_back('2');
column5.push_back('1');
column5.push_back('1');
column5.push_back('*');
column5.push_back('2');
column5.push_back('*');
column5.push_back('1');
column5.push_back('0');

column6.push_back('0');
column6.push_back('1');
column6.push_back('*');
column6.push_back('1');
column6.push_back('1');
column6.push_back('1');
column6.push_back('2');
column6.push_back('1');
column6.push_back('1');
column6.push_back('0');

column7.push_back('0');
column7.push_back('1');
column7.push_back('1');
column7.push_back('1');
column7.push_back('0');
column7.push_back('0');
column7.push_back('0');
column7.push_back('0');
column7.push_back('0');
column7.push_back('0');

column8.push_back('1');
column8.push_back('1');
column8.push_back('0');
column8.push_back('1');
column8.push_back('1');
column8.push_back('1');
column8.push_back('0');
column8.push_back('1');
column8.push_back('1');
column8.push_back('1');

column9.push_back('*');
column9.push_back('1');
column9.push_back('0');
column9.push_back('1');
column9.push_back('*');
column9.push_back('1');
column9.push_back('0');
column9.push_back('1');
column9.push_back('*');
column9.push_back('1');

column10.push_back('1');
column10.push_back('1');
column10.push_back('0');
column10.push_back('1');
column10.push_back('1');
column10.push_back('1');
column10.push_back('0');
column10.push_back('1');
column10.push_back('1');
column10.push_back('1');

set.push_back(column1);
set.push_back(column2);
set.push_back(column3);
set.push_back(column4);
set.push_back(column5);
set.push_back(column6);
set.push_back(column7);
set.push_back(column8);
set.push_back(column9);
set.push_back(column10);
}

void Board::display(){
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

void Board::getYCoor(char YCoor) {
   cout << "Please enter the Y coordinate." << endl;
   cin >> YCoor;
   while (!(YCoor <= '9' && YCoor >= '1')){
        cout << "Invalid input. Please enter a number between 1 and 9." << endl;
  	cin >> YCoor;
   }
   cout << "Valid input" << endl;
   this->YCoor = YCoor;
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

bool Board::check(){
   char XCoor,YCoor;
   this->getXCoor(XCoor);
   this->getYCoor(YCoor);
   int x = convert();
   int y = this->YCoor - 49;

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

void Board::run_game(){
cout << "T R E A S U R E  H U N T" << endl;
this->display();
this->updateBoard();
}
