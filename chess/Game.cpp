#include "Game.h"
#include "Pawn.h"
#include <iostream>
#include "Rook.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"

using namespace std;

Game::Game()
{
	LoadBoardFromFEN(defaultFEN);
}


void Game::LoadBoardFromFEN(string fen) {

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

			Team team = currentChar < 97 ? Team::White : Team::Black;
			string position = string(1, currentLetter) + to_string(currentRow);
			switch (currentChar) {
			case 'p':
			case 'P':
				pieces.push_back(make_unique<Pawn>(team, position));
				break;

			case 'b':
			case 'B':
				pieces.push_back(make_unique<Bishop>(team, position));
				break;

			case 'n':
			case 'N':
				pieces.push_back(make_unique<Knight>(team, position));
				break;

			case 'r':
			case 'R':
				pieces.push_back(make_unique<Rook>(team, position));
				break;

			case 'q':
			case 'Q':
				pieces.push_back(make_unique<Queen>(team, position));
				break;

			case 'k':
			case 'K':
				pieces.push_back(make_unique<King>(team, position));
				break;

			}

			currentLetter++;

			if (currentLetter > 'h') {
				currentLetter = 'a';
			}

		}
	}

}



