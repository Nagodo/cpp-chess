#pragma once
#include "Piece.h"
class King : public Piece
{
public:
	King(Team team, std::string position);

	std::string getSpritePath() override;
};

