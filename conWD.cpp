#include "conWD.h"
#include <iostream>

void ConWD::showDefeatMessage()
{
    std::cout << "Vous avez perdu !" << std::endl;
}

void ConWD::showVictoryMessage()
{
    std::cout << "Vous avez atteint 2048 ! Vous avez gagné !" << std::endl;
}

bool ConWD::askForReplay()
{
    std::cout << "Voulez-vous rejouer ? (Y/N) ";
    char response;
    std::cin >> response;
    return (response == 'Y' || response == 'y');
}
