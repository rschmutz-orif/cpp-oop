// team.h
#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>
#include "piece.h"

class Team {
private:
    std::string color;
    std::vector<Piece> pieces;

public:
    Team(const std::string &color, const std::string &configPath);
    void display() const;
    void displayPieces() const;
};

#endif