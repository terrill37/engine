#include "window.hpp"

#include <iostream>

Window::Window(const std::string& windowName) : window(sf::VideoMode(512,256), windowName, sf::Style::Titlebar) {
    window.setVerticalSyncEnabled(true);
}

void Window::Update(Player& player){
    sf::Event event;
    while(window.pollEvent(event)){
        if(event.type==sf::Event::Closed){
            window.close();
        }
        if(event.type==sf::Event::KeyPressed){
            //EXIT
            if(event.key.code==sf::Keyboard::Escape)
                window.close();
            
            //Player Movement
            if(event.key.code==sf::Keyboard::Down)
                player.moveDown();
            else if(event.key.code==sf::Keyboard::Up)
                player.moveUp();
            else if(event.key.code==sf::Keyboard::Right)
                player.moveRight();
            else if(event.key.code==sf::Keyboard::Left)
                player.moveLeft();
            
            //Player Speed
            if(event.key.code==sf::Keyboard::LShift){
                std::cout<<"shift clicked\n";
                player.setSpeed(64, sf::milliseconds(50));
            }
            else
                player.setSpeed(32, sf::milliseconds(80));

            window.draw(player.getSprite());
            window.display();

        }
    }
}

void Window::BeginDraw(){
   // std::cout<<"begin DRAW\n";
    window.clear(sf::Color::White);
}

void Window::Draw(const sf::Drawable& drawable){
	window.draw(drawable);
}

void Window::EndDraw(){
    //std::cout<<"end DRAW\n";
    window.display();
}

bool Window::IsOpen() const{
    return window.isOpen();
}

