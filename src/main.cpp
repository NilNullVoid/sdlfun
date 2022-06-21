#include <game.h>

Game *game = new Game();

int main(int argc, const char **argv)
{
    std::cout << "running" << std::endl;
    game->init("gaming", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, false);
    while(game->running())
    {
        game->handle();
        game->update();
        game->render();
    }
    game->clear();
    return 0;
}