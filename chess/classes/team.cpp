#include "team.h"
#include "piece.h"
#include <iostream>
#include <fstream>
#include "../utils/json.hpp"

using json = nlohmann::json;

PieceType stringToPieceType(const std::string& typeStr) {
    if (typeStr == "King") return PieceType::King;
    if (typeStr == "Queen") return PieceType::Queen;
    if (typeStr == "Bishop") return PieceType::Bishop;
    if (typeStr == "Knight") return PieceType::Knight;
    if (typeStr == "Rook") return PieceType::Rook;
    if (typeStr == "Pawn") return PieceType::Pawn;
    throw std::invalid_argument("Unknown type : " + typeStr);
}

Team::Team(const std::string& color, const std::string& configPath) : color(color) {
    std::ifstream file(configPath);
    json data;
    file >> data;

    for (const auto& teamData : data) {
        if (teamData["color"] == color) {
            for (const auto& p : teamData["pieces"]) {
                PieceType type = stringToPieceType(p["type"]);
                std::string position = p["position"];
                pieces.emplace_back(type, color, position);
            }
        }
    }
}

void Team::display() const {
    std::cout << "Team : " << color << std::endl;
}

void Team::displayPieces() const {
    std::cout << "Piece of team " << color << " :\n";
    for (const auto& piece : pieces) {
        piece.display();
    }
}