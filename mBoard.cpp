#include "Board.hpp"
#include "mBoard.hpp"
#include <iostream>
#include <vector>
using namespace std;

mBoard::mBoard(){
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
//create column for display set
for(int i = 0; i < 10; i++){
	seaColumn.push_back('~');
}
//populate display set
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

void mBoard::display(){
cout << "   A B C D E F G H I J " << endl;
cout << "1 |" << displaySet[0][0] << "|" << displaySet[0][1] << "|" << displaySet[0][2] << "|" << displaySet[0][3] << "|" << displaySet[0][4] << "|" << displaySet[0][5] << "|" << displaySet[0][6] << "|" << displaySet[0][7] << "|" << displaySet[0][8] << "|" << displaySet[0][9] << "|" << endl;

cout << "2 |" << displaySet[1][0] << "|" << displaySet[1][1] << "|" << displaySet[1][2] << "|" << displaySet[1][3] << "|" << displaySet[1][4] << "|" << displaySet[1][5] << "|" << displaySet[1][6] << "|" << displaySet[1][7] << "|" << displaySet[1][8] << "|" << displaySet[1][9] << "|" << endl;

cout << "3 |" << displaySet[2][0] << "|" << displaySet[2][1] << "|" << displaySet[2][2] << "|" << displaySet[2][3] << "|" << displaySet[2][4] << "|" << displaySet[2][5] << "|" << displaySet[2][6] << "|" << displaySet[2][7] << "|" << displaySet[2][8] << "|" << displaySet[2][9] << "|" << endl;

cout << "4 |" << displaySet[3][0] << "|" << displaySet[3][1] << "|" << displaySet[3][2] << "|" << displaySet[3][3] << "|" << displaySet[3][4] << "|" << displaySet[3][5] << "|" << displaySet[3][6] << "|" << displaySet[3][7] << "|" << displaySet[3][8] << "|" << displaySet[3][9] << "|" << endl;

cout << "5 |" << displaySet[4][0] << "|" << displaySet[4][1] << "|" << displaySet[4][2] << "|" << displaySet[4][3] << "|" << displaySet[4][4] << "|" << displaySet[4][5] << "|" << displaySet[4][6] << "|" << displaySet[4][7] << "|" << displaySet[4][8] << "|" << displaySet[4][9] << "|" << endl;

cout << "6 |" << displaySet[5][0] << "|" << displaySet[5][1] << "|" << displaySet[5][2] << "|" << displaySet[5][3] << "|" << displaySet[5][4] << "|" << displaySet[5][5] << "|" << displaySet[5][6] << "|" << displaySet[5][7] << "|" << displaySet[5][8] << "|" << displaySet[5][9] << "|" << endl;

cout << "7 |" << displaySet[6][0] << "|" << displaySet[6][1] << "|" << displaySet[6][2] << "|" << displaySet[6][3] << "|" << displaySet[6][4] << "|" << displaySet[6][5] << "|" << displaySet[6][6] << "|" << displaySet[6][7] << "|" << displaySet[6][8] << "|" << displaySet[6][9] << "|" << endl;

cout << "8 |" << displaySet[7][0] << "|" << displaySet[7][1] << "|" << displaySet[7][2] << "|" << displaySet[7][3] << "|" << displaySet[7][4] << "|" << displaySet[7][5] << "|" << displaySet[7][6] << "|" << displaySet[7][7] << "|" << displaySet[7][8] << "|" << displaySet[7][9] << "|" << endl;

cout << "9 |" << displaySet[8][0] << "|" << displaySet[8][1] << "|" << displaySet[8][2] << "|" << displaySet[8][3] << "|" << displaySet[8][4] << "|" << displaySet[8][5] << "|" << displaySet[8][6] << "|" << displaySet[8][7] << "|" << displaySet[8][8] << "|" << displaySet[8][9] << "|" << endl;

cout << "10|" << displaySet[9][0] << "|" << displaySet[9][1] << "|" << displaySet[9][2] << "|" << displaySet[9][3] << "|" << displaySet[9][4] << "|" << displaySet[9][5] << "|" << displaySet[9][6] << "|" << displaySet[9][7] << "|" << displaySet[9][8] << "|" << displaySet[9][9] << "|" << endl;
}
