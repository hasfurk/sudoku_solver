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
    
    uint8_t values=0;
    for(uint8_t row=0;row<board.size();row++){
        for (uint8_t column=0;column<board[row].size();column++){
            board[row][column] = values;
            values++;
        }
    }
    
    Sudoku sudoku(board);
    // sudoku.displayBoard();
    cout << sudoku.squareContains(5, 32) << endl; 
    return 0;
}