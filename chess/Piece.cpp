#include "Piece.h"

Piece::Piece(Team team, std::string position):
	team(team),
	position(position)
{

}

std::string Piece::getSpritePath() {

	return baseSpritePath;
}

Team Piece::getTeam() {
	return team;
}