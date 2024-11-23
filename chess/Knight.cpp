#include "Knight.h"

Knight::Knight(Team team, std::string position) : Piece(team, position) {

}

std::string Knight::getSpritePath() {

	if (team == Team::Black) return baseSpritePath + "bn.png";

	return baseSpritePath + "wn.png";
}
