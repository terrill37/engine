#include <iostream>
#include "Game.hpp"
//#include "window.hpp"

#include <SFML/Graphics.hpp>
int main(){
    Game game;
    while(game.IsRunning()){
        game.Update();
        game.LateUpdate();
        game.Draw();
    }
    std::cout<<"testing game\n";
    return 0;
}

   
