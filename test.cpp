#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include "test.h"

#include "grid.h"

using namespace std;

Test::Test()
{

}

bool Test::Test1()
{
    //test move right

    int start[4][4] =
    {
        {2,0,0,0},
        {0,2,0,0},
        {0,0,2,0},
        {0,0,0,2},
    };

    int result[4][4] =
    {
        {0,0,0,2},
        {0,0,0,2},
        {0,0,0,2},
        {0,0,0,2},
    };

    Grid grid(start);
    grid.moveRight();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test2()
{
    //test move down

    int start[4][4] =
    {
        {2,0,0,0},
        {0,2,0,0},
        {0,0,2,0},
        {0,0,0,2},
    };

    int result[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {2,2,2,2},
    };

    Grid grid(start);
    grid.moveDown();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test3()
{
    //test move up

    int start[4][4] =
    {
        {2,0,0,0},
        {0,2,0,0},
        {0,0,2,0},
        {0,0,0,2},
    };

    int result[4][4] =
    {
        {2,2,2,2},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
    };

    Grid grid(start);
    grid.moveUp();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test4()
{
    //test move left

    int start[4][4] =
    {
        {2,0,0,0},
        {0,2,0,0},
        {0,0,2,0},
        {0,0,0,2},
    };

    int result[4][4] =
    {
        {2,0,0,0},
        {2,0,0,0},
        {2,0,0,0},
        {2,0,0,0},
    };

    Grid grid(start);
    grid.moveLeft();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test5()
{
    //test move fusion right

    int start[4][4] =
    {
        {0,4,4,4},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
    };

    int result[4][4] =
    {
        {0,0,4,8},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
    };

    Grid grid(start);
    grid.moveRight();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test6()
{
    //test move fusion up

    int start[4][4] =
    {
        {0,4,0,0},
        {0,4,0,0},
        {0,4,0,0},
        {0,0,0,0},
    };

    int result[4][4] =
    {
        {0,8,0,0},
        {0,4,0,0},
        {0,0,0,0},
        {0,0,0,0},
    };

    Grid grid(start);
    grid.moveUp();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test7()
{
    //test move dusion down

    int start[4][4] =
    {
        {0,0,0,0},
        {0,0,4,0},
        {0,0,4,0},
        {0,0,4,0},
    };

    int result[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,4,0},
        {0,0,8,0},
    };

    Grid grid(start);
    grid.moveDown();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test8()
{
    //test move fusion left

    int start[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {4,4,4,0},
    };

    int result[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {8,4,0,0},
    };

    Grid grid(start);
    grid.moveLeft();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test9()
{
    //test move colision left

    int start[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,4,0,2},
    };

    int result[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {4,2,0,0},
    };

    Grid grid(start);
    grid.moveLeft();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test10()
{
    //test move colision up

    int start[4][4] =
    {
        {0,0,0,0},
        {4,0,0,0},
        {0,0,0,0},
        {2,0,0,0},
    };

    int result[4][4] =
    {
        {4,0,0,0},
        {2,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
    };

    Grid grid(start);
    grid.moveUp();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test11()
{
    //test move colision down

    int start[4][4] =
    {
        {0,0,0,2},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,8},
    };

    int result[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,2},
        {0,0,0,8},
    };

    Grid grid(start);
    grid.moveDown();

    bool success = grid.Compare(result);

    return success;
}

bool Test::Test12()
{
    //test move colision right

    int start[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,2,4,0},
    };

    int result[4][4] =
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,2,4},
    };

    Grid grid(start);
    grid.moveRight();

    bool success = grid.Compare(result);

    return success;
}





