#pragma once
#include "Piece.h"
class Rook : public Piece
{
public:
	Rook(Team team, std::string position);

	std::string getSpritePath() override;
};

