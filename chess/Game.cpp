#include "Game.h"
#include "Pawn.h"

Game::Game()
{
	SetupBoard();
}


void Game::SetupBoard() {
	pieces[0] = std::make_unique<Pawn>(Team::White);
}




