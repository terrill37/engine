//#include <iostream>
//#include "Game.hpp"

#include <SFML/Graphics.hpp>
int main(){
    //Game game;
    sf::RenderWindow window(sf::VideoMode(200,200), "it works");
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type==sf::Event::Closed)
                window.close();
        }
    }

    //while(game.IsRunning()){
    //    game.Update();
    //    game.LateUpdate();
    //    game.Draw();
    //    
    //    std::cout<<"testing game loop\n";
    //}
    
    return 0;
}

