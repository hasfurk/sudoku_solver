#ifndef SUDOKU_H_
#define SUDOKU_H_

#include <vector>
#include <cstdint>
using namespace std;

class Sudoku{
    private:
        vector<vector<uint8_t>>  board = {
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

    public:
        Sudoku(vector<vector<uint8_t>> board);

        bool rowNotContains(uint8_t row, uint8_t value);
        bool columnNotContains(uint8_t column, uint8_t value);
        bool squareNotContains(uint8_t square, uint8_t value);

        uint8_t findSquare(uint8_t row, uint8_t column);
        bool isEmpty(uint8_t row, uint8_t column);

        vector<uint8_t> searchRows(uint8_t value);
        vector<uint8_t> searchColumns(uint8_t value);

        vector<uint8_t> possibleLocations(vector<uint8_t> rows, vector<uint8_t> columns);

        void displayBoard();

        void solve();    
};

#endif