#include "Pawn.h"

Pawn::Pawn(Team team, std::string position): Piece(team, position) {

}

std::string Pawn::getSpritePath() {

	if (team == Team::Black) return baseSpritePath + "bp.png";
	
	return baseSpritePath + "wp.png";
}
