#include "chess.h"
#include <iostream>

Chess::Chess(const std::string &configPath) : whiteTeam("white", configPath), blackTeam("black", configPath) {
    // initialisation des équipes
}

void Chess::displayTeams() const {
    std::cout << "--------------------------\n";
    std::cout << "Chess teams :\n";
    std::cout << "--------------------------\n";
    whiteTeam.display();
    whiteTeam.displayPieces();
    std::cout << "--------------------------\n";
    blackTeam.display();
    blackTeam.displayPieces();
    std::cout << "--------------------------\n";

}