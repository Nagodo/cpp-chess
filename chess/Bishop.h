#pragma once
#include "Piece.h"
class Bishop : public Piece
{
public:
	Bishop(Team team, std::string position);

	std::string getSpritePath() override;
};

