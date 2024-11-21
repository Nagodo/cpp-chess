#include "Game.h"
#include "Pawn.h"
#include <iostream>

Game::Game()
{
	LoadBoardFromFEN(defaultFEN);
}


void Game::LoadBoardFromFEN(std::string fen) {


	/*for (int y = 8; y > 0; y--) {
		for (int x = 0; x < 8; x++) {

			if (x == 7) {
				currentLetter = 'a';
			}
			else {
				currentLetter++;
			}
		}
	}*/

	char currentLetter = 'a';
	int currentRow = 8;
	for (int i = 0; i < fen.length(); i++) {
		char currentChar = fen[i];

		if (isdigit(currentChar)) { // Empty space

			currentLetter += currentChar - '0';
			
			if (currentLetter > 'h') {

				currentLetter = 'a';
			}
		}
		else if (currentChar == '/') { // New row

			currentRow -= 1;
			
		}
		else { // Is Piece
			
			currentLetter++;
			
			if (currentLetter > 'h') {

				currentLetter = 'a';

			}
		}
	}

	pieces[0] = std::make_unique<Pawn>(Team::White, PieceType::PawnPiece);
}



