#include "Game.h"
#include "Pawn.h"

Game::Game()
{
	LoadBoardFromFEN(defaultFEN);
}


void Game::LoadBoardFromFEN(std::string) {
	pieces[0] = std::make_unique<Pawn>(Team::White);
}



