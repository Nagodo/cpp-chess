#pragma once
#include "Piece.h"
class Queen : public Piece
{
public:
	Queen(Team team, std::string position);

	std::string getSpritePath() override;
};

