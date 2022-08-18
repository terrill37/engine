#ifndef Game_hpp
#define Game_hpp

#include "window.hpp"
#include "gameMap.hpp"

#include <iostream>

class Game{
    public:
        Game();

        void Update();
        void LateUpdate();
        void Draw();
        bool IsRunning() const;
        
        sf::Texture playerTexture;

    private:
        Window window;
	    tileMap map;
        Player player;
};

#endif // Game_hpp

