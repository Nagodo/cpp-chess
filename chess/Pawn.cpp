#include "Pawn.h"

Pawn::Pawn(Team team): Piece(team) {
	
}

std::string Pawn::getSpritePath() {

	return baseSpritePath + "wp.png";
}
