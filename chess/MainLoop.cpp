#include "MainLoop.h"
#include "SDL_Handler.h"
#include <iostream>
#include <SDL2/SDL_events.h>

void Chess::Run() {

	SDL_Handler handler;

	Game game;

	bool run = true;
	while (run) {	

		if (SDL_WaitEvent(&handler.event)) {

			if (handler.event.type == SDL_QUIT) {
				break;
			}

		}

		handler.Draw(&game);
	}
}
