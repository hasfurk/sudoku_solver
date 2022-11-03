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
 * @return true if does not contain
 * @return false if contains
 */
bool Sudoku::rowNotContains(uint8_t row, uint8_t value){
    for(uint8_t value_in_row:board[row]){
        if(value_in_row == value) return false;
    }
    return true;
}

/**
 * @brief Check if column contains given value
 * 
 * @param column column number [0,8]
 * @param value value to check [1,9]
 * @return true if does not contain 
 * @return false if contains 
 */
bool Sudoku::columnNotContains(uint8_t column, uint8_t value){
    for(vector<uint8_t> rows:board){
        if(rows[column] == value) return false;
    }
    return true;
}

/**
 * @brief Check if square contains given value
 * 
 * @param square square number 0 1 2
 *                             3 4 5
 *                             6 7 8
 * @param value value to check [1,9]
 * @return true if does not contain 
 * @return false if contains 
 */
bool Sudoku::squareNotContains(uint8_t square, uint8_t value){
    uint8_t rows2check[] = {(square/3)*3, (square/3)*3+1, (square/3)*3+2};
    uint8_t columns2check[] = {(square%3)*3, (square%3)*3+1, (square%3)*3+2};
    for(uint8_t rows:rows2check){
        for(uint8_t columns:columns2check){
            if(board[rows][columns] == value) return false;
        }
    }
    return true;
}

/**
 * @brief find which square corresponds to given coordinates
 * 
 * @param row row value of the coordinate
 * @param column column value of the coordinate
 * @return uint8_t value of the corresponding square
 */
uint8_t Sudoku::findSquare(uint8_t row, uint8_t column){
    uint8_t square_val = row/3*3 + column/3;
    return square_val;
}

/**
 * @brief Check if the given coordinate on the board carries a value
 * 
 * @param row row value of coordinate [0,8]
 * @param column column value of coordinate [0,8]
 * @return true if value at coordinate == 0
 * @return false if calue ar coordinate != 0
 */
bool Sudoku::isEmpty(uint8_t row, uint8_t column){
    if(board[row][column]==0) return true;
    return false;
}

/**
 * @brief checks rows if any of them contains the given value
 * 
 * @param value value to search for
 * @return vector<uint8_t> vector that holds the row values
 */
vector<uint8_t> Sudoku::searchRows(uint8_t value){
    vector<uint8_t> rows;
    for(uint8_t row_num=0;row_num<board.size();row_num++){
        if(rowNotContains(row_num, value)){
            rows.push_back(row_num);
        }
    }
    return rows;
}

/**
 * @brief checks columns if any of them contains the given value
 * 
 * @param value value to search for
 * @return vector<uint8_t> vector to the array that holds the column values
 */
vector<uint8_t> Sudoku::searchColumns(uint8_t value){
    vector<uint8_t> columns;
    for(uint8_t column_num=0;column_num<board.size();column_num++){
        if(columnNotContains(column_num, value)){
            columns.push_back(column_num);
        }
    }
    return columns;
}

/**
 * @brief find the possible locations of a value based on rows and columns that do not contain it
 * 
 * @param rows rows that do not contain the value
 * @param columns columns that do not contain the value
 * @return vector<uint8_t> list of possible locations in form [x1 y1 s1 x2 y2 s2 ...] -> (xn, yn) coordinate, sn corresponding square
 */
vector<uint8_t> possibleLocations(vector<uint8_t> rows, vector<uint8_t> columns){
    
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