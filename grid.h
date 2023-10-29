#pragma once

#include "case.h"

#define SIZE 4

class Grid
{
private:
    Case grid[SIZE][SIZE];
    bool checkEmptyCells();
    void addRandomNumber();
public:

    Grid();
    Grid(int initialGrid[SIZE][SIZE]);
    void displayGrid();
    void initializeGrid();
    void updateGrid();

    bool moveUp();
    bool moveDown();
    bool moveLeft();
    bool moveRight();

    void restartUp();

    bool Compare(int otherGrid[4][4]);
    int conWD();
    int score = 0;

};
