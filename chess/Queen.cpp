#include "Queen.h"

Queen::Queen(Team team, std::string position) : Piece(team, position) {

}

std::string Queen::getSpritePath() {

	if (team == Team::Black) return baseSpritePath + "bq.png";

	return baseSpritePath + "wq.png";
}