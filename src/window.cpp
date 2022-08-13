#include "window.hpp"
#include <iostream>

Window::Window(const std::string& windowName) : window(sf::VideoMode(800,800), windowName, sf::Style::Titlebar) {
    window.setVerticalSyncEnabled(true);
}

void Window::Update(){
    sf::Event event;
    while(window.pollEvent(event)){
        if(event.type==sf::Event::Closed){
            window.close();
        }
        if(event.type==sf::Event::KeyPressed){
            if(event.key.code==sf::Keyboard::Escape)
                window.close();
        }

        //else break;
    }
}

void Window::BeginDraw(){
    //std::cout<<"begin DRAW\n";
    window.clear(sf::Color::White);
}

void Window::Draw(const sf::Drawable& drawable){
    std::cout<<"DRAW\n";
    window.draw(drawable);
}

void Window::EndDraw(){
    //std::cout<<"end DRAW\n";
    window.display();
}

bool Window::IsOpen() const{
    return window.isOpen();
}
