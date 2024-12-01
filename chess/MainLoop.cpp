#include "MainLoop.h"
#include "SDL_Handler.h"
#include <iostream>
#include <SDL2/SDL_events.h>

void Chess::Run() {

	SDL_Handler* handler = new SDL_Handler();

	Game game;
	
	bool run = true;
	while (run) {	

		if (SDL_WaitEvent(handler->event)) {

			switch (handler->event->type) {
			case SDL_QUIT:
				break;
			

			case SDL_BUTTON_LEFT:
				std::cout << "Mouse 0" << std::endl;
				break;
				
			case SDL_BUTTON_RIGHT:
				std::cout << "Mouse 1" << std::endl;
				break;	
			}
		}

		handler->Draw(&game);
	}
}
