#ifndef PIECE_H
#define PIECE_H

#include <string>

enum class PieceType {
    King,
    Queen,
    Bishop,
    Knight,
    Rook,
    Pawn
};

class Piece {
    private:
        PieceType type;
        std::string color;
        std::string position; 
    
    public:
        Piece(PieceType type, const std::string& color, const std::string& position);
    
        std::string getTypeName() const;
        std::string getColor() const;
        std::string getPosition() const;
    
        void display() const;
    };
    
    #endif