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

        bool rowContains(uint8_t row, uint8_t value);
        bool columnContains(uint8_t column, uint8_t value);
        bool squareContains(uint8_t square, uint8_t value);
        bool isEmpty(uint8_t row, uint8_t column);

        uint8_t* searchRows(uint8_t value);
        uint8_t* searchColumns(uint8_t value);

        void displayBoard();

        void solve();    
};

#endif