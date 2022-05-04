#include <iostream>
#include "Game.hpp"

int main(){
    Game game;
    while(game.IsRunning()){
        game.Update();
        game.LateUpdate();
        game.Draw();
        std::cout<<"testing game loop\n";
    }
    std::cout<<"testing game\n";
    return 0;
}

