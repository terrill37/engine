#include "window.hpp"

#include <iostream>

Window::Window(const std::string& windowName) : window(sf::VideoMode(512,256), windowName, sf::Style::Titlebar) {
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
    }
}

void Window::BeginDraw(){
   // std::cout<<"begin DRAW\n";
    window.clear(sf::Color::White);
}

void Window::Draw(const sf::Drawable& drawable){
    //std::cout<<"drawable"<<std::endl;
	window.draw(drawable);
    //circle.setRadius(20);
    //circle.setOutlineColor(sf::Color::Green);
    //circle.setOutlineThickness(5);
    //circle.setPosition(0,0);
    //circle.setFillColor(sf::Color::Red);
    //window.draw(circle);

}

void Window::EndDraw(){
    //std::cout<<"end DRAW\n";
    window.display();
}

bool Window::IsOpen() const{
    return window.isOpen();
}

