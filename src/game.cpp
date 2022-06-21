#include <game.h>

Game::Game(){}
Game::~Game(){}

void Game::init(const char *title, int x, int y, int w, int h, bool fs)
{
    int flags = 0;
    if(fs == true)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING))
    {
        isRunning = true;
        window = SDL_CreateWindow(title, x, y, w, h, flags);
        renderer = SDL_CreateRenderer(window, -1, 0);
        SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
    } else {
        std::cout << "epic fail" << std::endl;
        isRunning = false;
        return;
    }
};

void Game::handle()
{}

void Game::update()
{}

void Game::render()
{
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void Game::clear()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_OpenURL("https://google.com/");
    SDL_Quit();
}