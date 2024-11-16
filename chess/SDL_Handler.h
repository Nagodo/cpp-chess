#pragma once
#include "SDL2/SDL.h";
#include "Game.h"
#include <map>


class SDL_Handler
{
public:

	SDL_Handler();
	~SDL_Handler();

	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 640;

	SDL_Renderer* renderer;
	SDL_Window* window;
	SDL_Event* event;

	SDL_Texture* LoadImageToTexture(std::string file);
	std::map<std::string, SDL_Texture*> loadedTextures;

	void Draw(Game* game);

private:
	void DrawBoard(Game* game);
	void DrawPieces(Game* game);
};

