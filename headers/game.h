#pragma once
#include <iostream>
#include <SDL2/SDL.h>

class Game
{
public:
    Game();
    ~Game();

    void init(const char *title, int x, int y, int w, int h, bool fs);
    void handle();
    void update();
    void render();
    void clear();

    bool running() { return isRunning;}
private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};