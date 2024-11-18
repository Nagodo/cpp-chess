#pragma once
#include "SDL2/SDL.h";
#include "Piece.h"
#include <memory>
#include <vector>

class Game
{

public:
	Game();

	const int TILE_SIZE = 80;
	const SDL_Color whiteColor = { 255, 255, 255 };
	const SDL_Color blackColor = { 10, 10, 10 };

	const std::string defaultFEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";

	std::vector<std::unique_ptr<Piece>> pieces = std::vector<std::unique_ptr<Piece>>(32);
	
	void LoadBoardFromFEN(std::string);

private:
};

