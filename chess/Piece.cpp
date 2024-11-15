#include "Piece.h"

Piece::Piece(Team team):
	team(team)
{

}

std::string Piece::getSpritePath() {

	return baseSpritePath;
}

Team Piece::getTeam() {
	return team;
}