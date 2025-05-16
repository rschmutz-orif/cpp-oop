#ifndef CHESS_H
#define CHESS_H

#include "team.h"

class Chess {
private:
    Team whiteTeam;
    Team blackTeam;

public:
    Chess(const std::string& dataPath); 
    void displayTeams() const;
};


#endif