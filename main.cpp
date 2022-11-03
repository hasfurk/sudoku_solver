#include <iostream>
#include "sudoku.h"

int main(int argc, char *argv[]){
    vector<vector<uint8_t>> board = {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        };
    
    for(uint8_t row=0;row<board.size();row++){
        for (uint8_t column=0;column<board[row].size();column++){
            board[row][column] = rand()%9+1;
        }
    }
    
    Sudoku sudoku(board);
    sudoku.displayBoard();

    uint8_t square = sudoku.findSquare(6,5);
    printf("%d\n", square);
    return 0;
}