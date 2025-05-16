#include "piece.h"
#include <iostream>

Piece::Piece(PieceType type, const std::string& color, const std::string& position)
    : type(type), color(color), position(position) {}

std::string Piece::getColor() const {
    return color;
}

std::string Piece::getTypeName() const {
    switch (type) {
        case PieceType::King:   return "King";
        case PieceType::Queen:  return "Queen";
        case PieceType::Bishop: return "Bishop";
        case PieceType::Knight: return "Knight";
        case PieceType::Rook:   return "Rook";
        case PieceType::Pawn:   return "Pawn";
        default:                return "Unknown piece";
    }
}

std::string Piece::getPosition() const {
    return position;
}

void Piece::display() const {
    std::cout << color << " " << getTypeName() << " in position " << position << std::endl;
}