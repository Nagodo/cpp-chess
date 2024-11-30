#pragma once
#include <string>




class Piece
{
public:
	Piece(Team team, std::string position);

	const std::string baseSpritePath = "./sprites/";

	virtual std::string getSpritePath();

	std::string position;

	Team getTeam();

protected:
	Team team;
};


