#include "Piece.h"

Piece::Piece(Team team, PieceType type):
	team(team),
	pieceType(type)
{

}

std::string Piece::getSpritePath() {

	return baseSpritePath;
}

Team Piece::getTeam() {
	return team;
}