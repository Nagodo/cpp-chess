#include "King.h"

King::King(Team team, std::string position) : Piece(team, position) {

}

std::string King::getSpritePath() {

	if (team == Team::Black) return baseSpritePath + "bk.png";

	return baseSpritePath + "wk.png";
}