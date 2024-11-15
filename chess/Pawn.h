#pragma once
#include "Piece.h"
#include <string>

class Pawn : public Piece
{
public:
	Pawn(Team team);

	std::string getSpritePath() override;
};

