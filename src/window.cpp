#include "window.hpp"
#include <iostream>

Window::Window(const std::string& windowName) : window(sf::VideoMode(800,800), windowName, sf::Style::Titlebar) {
    window.setVerticalSyncEnabled(true);
}

void Window::Update(){
    sf::Event event;
    //std::cout<<window.pollEvent(event)<<"\n";
    //std::cout<<sf::Keyboard::isKeyPressed(sf::Keyboard::Down)<<"\n";
    //std::cout<<sf::Keyboard::isKeyPressed<<std::endl; 
    //std::cout<<"Enter button: "<<sf::Keyboard::Enter<<std::endl;
    //window.pollEvent(event);
    //std::cout<<"Pressed button: "<<event.key.code<<std::endl;
    //if(window.pollEvent(event)){
    while(sf::Keyboard::isKeyPressed){ //LOOK INTO FIXING IN FUTURE
        //window.pollEvent(event);
        //std::cout<<"Pressed button: "<<event.key.code<<std::endl;
        //std::cout<<"Escape button: "<<sf::Keyboard::Escape<<std::endl;
        //std::cout<<"POLL EVENT\n";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            std::cout<<"detected key down\n";
            window.close();
            break;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            std::cout<<"detected key\n";
            window.close();
            break;
        }
        //if(event.type==sf::Event::Closed){
        //    window.close();
        //}

        else break;
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
