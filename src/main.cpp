#include <iostream>
#include "Game.hpp"

//#include <SFML/Graphics.hpp>
int main(){
    Game game;
    while(game.IsRunning()){
    //for(int i=0; i<10; i++){
        game.Update();
        game.LateUpdate();
        game.Draw();
        std::cout<<"testing game loop\n";
    }
    std::cout<<"testing game\n";
    return 0;
}

