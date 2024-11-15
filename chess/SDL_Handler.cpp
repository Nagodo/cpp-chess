#include "SDL_Handler.h"
#include "SDL2/SDL.h";
#include <iostream>
#include "Game.h";

// Init the sdl process
SDL_Handler::SDL_Handler() {
	
	if (SDL_Init(SDL_INIT_VIDEO) == -1) {
		std::cout << "Could not init SDL\n";
		exit(-1);
	}

	window = SDL_CreateWindow("Chess", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);
	if (!window) {
		std::cout << "Cound not init window\n";
		exit(-1);
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (!renderer) {
		std::cout << "Cound init renderer\n";
		exit(-1);
	}
}

SDL_Handler::~SDL_Handler() {
	std::cout << "destruct";
}

void SDL_Handler::Draw(Game* game) {

	DrawBoard(game);

	SDL_RenderPresent(renderer);
}

void SDL_Handler::DrawBoard(Game* game) {
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {

			if ((x + y) % 2) {
				SDL_SetRenderDrawColor(renderer, game->whiteColor.r, game->whiteColor.g, game->whiteColor.b, 255);
			}
			else {
				SDL_SetRenderDrawColor(renderer, game->blackColor.r, game->blackColor.g, game->blackColor.b, 255);
			}

			SDL_Rect rect = {
				x * SCREEN_WIDTH / 8,
				y * SCREEN_HEIGHT / 8,
				game->TILE_SIZE,
				game->TILE_SIZE
			};

			SDL_RenderFillRect(renderer, &rect);
		}
	}
}

void SDL_Handler::DrawPieces(Game* game) {

	for (const auto& piece : game->pieces) {

	}

}