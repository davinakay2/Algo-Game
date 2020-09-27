#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 489
//game tic tac toe yang di modifikasi
//saya masih belajar cara pakai SDL jadi baru sampe sini progressnya

int main()
{
    SDL_Window *window= SDL_CreateWindow("Procedural",100,100,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    return 0;

}