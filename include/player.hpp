#ifndef player_hpp
#define player_hpp

#include <iostream>
#include <SFML/Graphics.hpp>

class Player{
  public:
    Player(sf::Texture&);

    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    void setSpeed(float, sf::Time);
    
    sf::Sprite getSprite() const;

  private:
    sf::Sprite sprite; //player sprite
    sf::Vector2i source; //sprite sheet crop
    enum direction{Down, Left, Right, Up}; //Direction Enumeration

    //Animation data
    float speed;
    sf::Clock animClock;
    sf::Time animTime;


};

#endif
