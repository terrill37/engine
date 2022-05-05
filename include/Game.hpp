#ifndef Game_hpp
#define Game_hpp

#include <SFML/Graphics.hpp>

#include <iostream>

//#include "WorkingDirectory.hpp"
#include "window.h"

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

