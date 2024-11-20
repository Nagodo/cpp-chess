#include "Pawn.h"

Pawn::Pawn(Team team, PieceType type): Piece(team, type) {

}

std::string Pawn::getSpritePath() {

	return baseSpritePath + "wp.png";
}
