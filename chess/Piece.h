#pragma once
#include <string>

enum Team {
	White,
	Black
};

enum PieceType {
	PawnPiece,
	KnightPiece,
	BishopPiece,
	RookPiece,
	QueenPiece,
	KingPiece
};


class Piece
{
	

public:
	Piece(Team team, PieceType type);

	const std::string baseSpritePath = "./sprites/";
	virtual std::string getSpritePath();

	PieceType pieceType;

	Team getTeam();

protected:
	Team team;
};


