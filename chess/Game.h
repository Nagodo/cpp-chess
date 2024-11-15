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

	std::vector<std::unique_ptr<Piece>> pieces;
	
	void SetupBoard();

private:
};

