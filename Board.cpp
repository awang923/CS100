#include "Board.hpp"
#include <iostream>
#include <vector>
using namespace std;

Board::Board(){
vector <char> seaColumn;


for(int i = 0; i < 10; i++){
	seaColumn.push_back('~');
}

for(int i = 0; i < 10; i++){
	displaySet.push_back(seaColumn);
}	

populate();
}

void Board::display(){
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

void Board::run_game(){
cout << "T R E A S U R E  H U N T" << endl;
this->display();
}

void Board::populate(){
 vector<char> mt;
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
