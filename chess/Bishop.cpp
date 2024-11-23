#include "Bishop.h"

Bishop::Bishop(Team team, std::string position) : Piece(team, position) {

}

std::string Bishop::getSpritePath() {

	if (team == Team::Black) return baseSpritePath + "bb.png";

	return baseSpritePath + "wb.png";
}