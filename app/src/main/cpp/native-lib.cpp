#include "GameEngine/include/Application.hpp"

extern "C" int SDL_main(int argc, char* argv[]);


int SDL_main(int argc, char* argv[])
{
    char* values[] = {"Main", "--imgui"};
    game_main(2, values);
}
