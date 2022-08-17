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

    private:
        Window window;
		
};

#endif // Game_hpp

