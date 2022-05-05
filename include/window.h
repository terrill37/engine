#ifndef window_h
#define window_h

#include <SFML/Graphics.hpp>

class Window{
    public:
        Window(const std::string& windowName);
        
        void Update();

        void BeginDraw();
        void Draw(const sf::Drawable& drawable);
        void EndDraw();
        
        bool IsOpen() const;
    
    private:
        sf::RenderWindow window; //(sf::VideoMode(200,200), "SFML works!");
};
#endif
