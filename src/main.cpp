#include <iostream>
#include "Game.hpp"

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main(){
    Game game;
    while(game.IsRunning()){
        game.Update();
        game.LateUpdate();
        game.Draw();
    }
 
    return 0;
}

   
