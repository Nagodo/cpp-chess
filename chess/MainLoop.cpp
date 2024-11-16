#include "MainLoop.h"
#include "SDL_Handler.h"
#include <iostream>
#include <SDL2/SDL_events.h>

void Chess::Run() {

	SDL_Handler* handler = new SDL_Handler();

	Game* game = new Game();

	bool run = true;
	while (run) {	

		if (SDL_WaitEvent(handler->event)) {

			if (handler->event->type == SDL_QUIT) {
				break;
			}

		}

		handler->Draw(game);
	}
}
