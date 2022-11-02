#include "sudoku.h"
#include <iostream>

/**
 * @brief Construct a new Sudoku:: Sudoku object
 * 
 * @param board 
 */
Sudoku::Sudoku(vector<vector<uint8_t>> board){
    for(short row=0;row<board.size();row++){
        for(short column=0;column<board[row].size();column++){
            this->board[row][column] = board[row][column];
        }
    }
}

/**
 * @brief Check if row contains given value
 * 
 * @param row row number [0,8]
 * @param value value to check [1,9]
 * @return true
 * @return false 
 */
bool Sudoku::rowContains(uint8_t row, uint8_t value){
    for(uint8_t value_in_row:board[row]){
        if(value_in_row == value) return true;
    }
    return false;
}

/**
 * @brief Check if column contains given value
 * 
 * @param column column number [0,8]
 * @param value value to check [1,9]
 * @return true 
 * @return false 
 */
bool Sudoku::columnContains(uint8_t column, uint8_t value){
    for(vector<uint8_t> rows:board){
        if(rows[column] == value) return true;
    }
    return false;
}

/**
 * @brief Check if square contains given value
 * 
 * @param square square number 0 1 2
 *                             3 4 5
 *                             6 7 8
 * @param value value to check [1,9]
 * @return true 
 * @return false 
 */
bool Sudoku::squareContains(uint8_t square, uint8_t value){
    uint8_t rows2check[] = {(square/3)*3, (square/3)*3+1, (square/3)*3+2};
    uint8_t columns2check[] = {(square%3)*3, (square%3)*3+1, (square%3)*3+2};
    for(uint8_t rows:rows2check){
        for(uint8_t columns:columns2check){
            if(board[rows][columns] == value) return true;
        }
    }
    return false;
}

/**
 * @brief Check if the given coordinate on the board carries a value
 * 
 * @param row row value of coordinate [0,8]
 * @param column column value of coordinate [0,8]
 * @param value 
 * @return true 
 * @return false 
 */
bool Sudoku::isEmpty(uint8_t row, uint8_t column){
    if(board[row][column]==0) return true;
    return false;
}

/**
 * @brief checks rows if any of them contains the given value
 * 
 * @param value value to search for
 * @return uint8_t* pointer to the array that holds the row values
 */
uint8_t* searchRows(uint8_t value){

}

/**
 * @brief checks columns if any of them contains the given value
 * 
 * @param value value to search for
 * @return uint8_t* pointer to the array that holds the column values
 */
uint8_t* searchColumns(uint8_t value){

}

/**
 * @brief Displays the current state of the board
 * 
 */
void Sudoku::displayBoard(){
    for(vector<uint8_t> row:board){
        for(uint8_t column:row){
            printf("%d\t",column);
        }
        printf("\n");
    }
}

/**
 * @brief solves the sudoku
 */
void Sudoku::solve(){

}