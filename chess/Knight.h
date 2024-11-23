#pragma once
#include "Piece.h"
class Knight : public Piece
{
public:
	Knight(Team team, std::string position);

	std::string getSpritePath() override;
};

