#pragma once
#include "Piece.h"
#include <string>

class Pawn : public Piece
{
public:
	Pawn(Team team, PieceType type);

	std::string getSpritePath() override;
};

