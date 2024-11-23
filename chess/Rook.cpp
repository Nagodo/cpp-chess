#include "Rook.h"

Rook::Rook(Team team, std::string position) : Piece(team, position) {

}

std::string Rook::getSpritePath() {

	if (team == Team::Black) return baseSpritePath + "br.png";

	return baseSpritePath + "wr.png";
}