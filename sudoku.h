#ifndef SUDOKU_H_
#define SUDOKU_H_

#include <vector>
using namespace std;

class Sudoku{
    private:
        vector<vector<int>>  board = {
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
        Sudoku(vector<vector<int>> board);

        bool rowContains(int row, int value);
        bool columnContains(int column, int value);
        bool squareContains(int square, int value);

        void displayBoard();
    
};

#endif