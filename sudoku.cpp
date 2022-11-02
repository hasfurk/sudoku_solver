#include "sudoku.h"
#include "iostream"

Sudoku::Sudoku(vector<vector<int>> board){
    for(short row=0;row<board.size();row++){
        for(short column=0;column<board[row].size();column++){
            this->board[row][column] = board[row][column];
        }
    }
}

bool Sudoku::rowContains(int row, int value){
    return false;
}

bool Sudoku::columnContains(int column, int value){
    return false;
}

bool Sudoku::squareContains(int square, int value){
    return false;
}

void Sudoku::displayBoard(){
    for(vector<int> row:board){
        for(int column:row){
            printf("%d\t",column);
        }
        printf("\n");
    }
}