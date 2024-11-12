#pragma once
enum Team {
	White,
	Black
};

class Piece
{
public:

	Team getTeam();

private:
	Team team;
};

