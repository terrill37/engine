#include <iostream>
#include "Game.hpp"
//#include "window.hpp"

#include <SFML/Graphics.hpp>
int main(){
    Game game;
    while(game.IsRunning()){
    //for(int i=0; i<10; i++){
        game.Update();
        game.LateUpdate();
        game.Draw();
    //    std::cout<<"testing game loop\n";
    }
    std::cout<<"testing game\n";
    return 0;
}

//int main(int srgc, char* argv[]){
//    sf::Window window(sf::VideoMode(800,600),"SFML");
//    int frame=0;   
//    //std::cout<<"event type: "<< Event.type<<std::endl
//    std::cout<<"keypressed: "<<sf::Event::KeyPressed<<std::endl;
//    std::cout<<"MouseButtonReleased: "<<sf::Event::MouseButtonReleased<<std::endl;
//    std::cout<<"MouseMoved: "<<sf::Event::MouseMoved<<std::endl;
//    std::cout<<"Closed: "<<sf::Event::Closed<<std::endl;
//    std::cout<<"Resized: "<<sf::Event::Resized<<std::endl;
//    std::cout<<"GainedFocus: "<<sf::Event::GainedFocus<<std::endl;
//    std::cout<<"MouseEntered: "<<sf::Event::MouseEntered<<std::endl;
//    while(window.isOpen()){
//        frame++;
//        //std::cout<<"window open"<<std::endl;
//        int i=0;
//        int k=0;
//        sf::Event Event;
//        while(window.pollEvent(Event)){
//            //std::cout<<"event polled"<<std::endl;
//            std::cout<<"event type: "<< Event.type<<std::endl;
//            //std::cout<<"keypressed: "<<sf::Event::KeyPressed<<std::endl;
//            //std::cout<<"MouseButtonReleased: "<<sf::Event::MouseButtonReleased<<std::endl;
//            if(Event.type==sf::Event::Closed)
//                window.close();
//            if(Event.type==sf::Event::KeyPressed){
//                k++;
//                if(Event.key.code==sf::Keyboard::Escape)
//                    window.close();
//            }
//            i++;
//        }
//        window.display();
//        if(i!=0) std::cout<<frame<<" -> "<<i<<" "<<k<<std::endl;
//    }
//    return 0;
//}
    
