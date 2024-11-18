#pragma once
#include <string>

enum Team {
	White,
	Black
};


class Piece
{
public:
	Piece(Team team);

	const std::string baseSpritePath = "./sprites/";
	virtual std::string getSpritePath();

	Team getTeam();

protected:
	Team team;
};

