#include "player.hpp"

//Player::Player(){};

Player::Player(sf::Texture& TEMP_Texture){
    if(!TEMP_Texture.loadFromFile("../playerSprite.png")){
        std::cout<<"Player Texture Error\n";
        return;
    }

    sprite.setTexture(TEMP_Texture);
    sprite.setPosition(0, 0); //set sprite position
    sprite.setScale(1.5f,1.5f); //sprite scale
    sf::Vector2i source(1,Down); //Default sprite sheet crop
    sprite.setTextureRect(sf::IntRect(source.x*32,source.y*32,32,32));

    animTime=sf::milliseconds(80);
    speed=0.20;
}

sf::Sprite Player::getSprite() const{
    return sprite;
}

void Player::moveUp(){
    std::cout<<"move up\n";
    source.y=Down;
    sprite.move(0, -speed);
    sprite.setOrigin(16.f,16.f);
    sprite.setRotation(0.f);

    if(animClock.getElapsedTime()>animTime){
        sprite.setTextureRect(sf::IntRect(source.x*32, source.y*32, 32, 32));
        source.x++;
        if(source.x*32>=sprite.getTexture()->getSize().x){
            source.x=0;
        }
        animClock.restart();
    }
}

void Player::moveDown(){
    std::cout<<"move down\n";
    source.y=Down;
    sprite.move(0, speed);
    sprite.setOrigin(16.f,16.f);
    sprite.setRotation(180.f);

    if(animClock.getElapsedTime()>animTime){
        sprite.setTextureRect(sf::IntRect(source.x*32, source.y*32, 32, 32));
        source.x++;
        if(source.x*32>=sprite.getTexture()->getSize().x){
            source.x=0;
        }
        animClock.restart();
    }
}

void Player::moveRight(){
    std::cout<<"move right\n";
    source.y=Down;
    sprite.move(speed,0);
    sprite.setOrigin(16.f,16.f);
    sprite.setRotation(90.f);

    if(animClock.getElapsedTime()>animTime){
        sprite.setTextureRect(sf::IntRect(source.x*32, source.y*32, 32, 32));
        source.x++;
        if(source.x*32>=sprite.getTexture()->getSize().x){
            source.x=0;
        }
        animClock.restart();
    }
}

void Player::moveLeft(){
    std::cout<<"move left\n";
    source.y=Down;
    sprite.move(-speed, 0);
    sprite.setOrigin(16.f,16.f);
    sprite.setRotation(270.f);

    if(animClock.getElapsedTime()>animTime){
        sprite.setTextureRect(sf::IntRect(source.x*32, source.y*32, 32, 32));
        source.x++;
        if(source.x*32>=sprite.getTexture()->getSize().x){
            source.x=0;
        }
        animClock.restart();
    }
}

void Player::setSpeed(float TEMP_Speed, sf::Time TEMP_AnimTime){
    std::cout<<TEMP_Speed<<std::endl;
    speed=TEMP_Speed;
    animTime=TEMP_AnimTime;
}
