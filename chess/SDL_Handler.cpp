#include "SDL_Handler.h"
#include <iostream>

SDL_Handler::SDL_Handler() {
	std::cout << "init \n";
}

SDL_Handler::~SDL_Handler() {
	std::cout << "destruct";
}