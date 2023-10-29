#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include "input.h"
#include "conWD.h"
//#include "random.h"
using namespace std;

//The game 
/*
#include "grid.h"
int main()
{
    Grid myGrid;
    myGrid.initializeGrid();
    Input myInput;
    bool isPlaying = true;

    myGrid.displayGrid();
    while (isPlaying)
    {
        
        bool aMove = false;
        string Usermove = myInput.getUserInput();//on récupère la touche préssé par le joueur

        
        if (Usermove == "z")
        {
            aMove = myGrid.moveUp(); 
        }
        else if (Usermove == "s")
        {
            aMove = myGrid.moveDown();
        }
        else if (Usermove == "q")
        {
            aMove = myGrid.moveLeft();
        }
        else if (Usermove == "d")
        {
            aMove = myGrid.moveRight();
        }
        
        myGrid.restartUp();
        if (aMove == true)
        {
            myGrid.updateGrid();//génère un nouveau chiffre dans la grille
            
        }

        system("cls");
        myGrid.displayGrid();

        if (myGrid.conWD() == 1 || myGrid.conWD() == 2)
        {
            system("cls");
            myGrid.displayGrid();
            if (myGrid.conWD() == 1)
            {
                ConWD::showDefeatMessage;
            }
            else
            {
                ConWD::showVictoryMessage();
            }
            isPlaying = ConWD::askForReplay();
            if (isPlaying)
            {
                myGrid.initializeGrid();
            }
            else
            {
                break;
            }

        }
    }

    return 0;
}
*/

//for test

#include "test.h"

int main()
{
    Test myTest;

    struct TestResult {
        string name;
        bool result;
    };

    // Je fais un tableau pour mes test
    TestResult testResults[] = {
        { "Test1", myTest.Test1() },
        { "Test2", myTest.Test2() },
        { "Test3", myTest.Test3() },
        { "Test4", myTest.Test4() },
        { "Test5", myTest.Test5() },
        { "Test6", myTest.Test6() },
        { "Test7", myTest.Test7() },
        { "Test8", myTest.Test8() },
        { "Test9", myTest.Test9() },
        { "Test10", myTest.Test10() },
        { "Test11", myTest.Test11() },
        { "Test12", myTest.Test12() },
        
    };

    for (const TestResult& test : testResults) {
        cout << "Test '" << test.name << "': ";
        if (test.result) {
            cout << "Succes" << endl;
        }
        else {
            cout << "Echec" << endl;
        }
    }

    return 0;
}







