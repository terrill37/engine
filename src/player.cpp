#include "player.hpp"

//Player::Player(){};

Player::Player(sf::Texture& TEMP_Texture){
    if(!TEMP_Texture.loadFromFile("../textures/playerSprite.png")){
        std::cout<<"Player Texture Error\n";
        return;
    }

    sprite.setTexture(TEMP_Texture);
    sprite.setPosition(0, 0); //set sprite position
    sprite.setScale(1.f,1.f); //sprite scale
    //sprite.setOrigin(16.f,16.f);
    sf::Vector2i source(1,Down); //Default sprite sheet crop
    sprite.setTextureRect(sf::IntRect(source.x*32,source.y*32,32,32));

    animTime=sf::milliseconds(80);
    speed=0.20;
}

sf::Sprite Player::getSprite() const{
    return sprite;
}

sf::Vector2f Player::getPosition(){
    return sprite.getPosition();
}

void Player::moveUp(){
    std::cout<<"move up\n";
    source.y=Down;
    //sprite.move(0, -speed);
    sf::Vector2f pos=sprite.getPosition();
    float rot = sprite.getRotation();
    if(rot!=0){
        sprite.setRotation(0.f);
        if(rot==90) sprite.setPosition(pos.x-32, pos.y);
        else if(rot==180) sprite.setPosition(pos.x-32, pos.y-32);
        else if(rot==270) sprite.setPosition(pos.x, pos.y-32);
    }
    else{
        sprite.move(0, -speed);
        sprite.move(0, -speed);
        sprite.move(0, -speed);
        sprite.move(0, -speed);
    }
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
    //sprite.move(0, speed);
    sf::Vector2f pos=sprite.getPosition();
    float rot = sprite.getRotation();
    if(rot!=180){
        sprite.setRotation(180.f);
        if(rot==0) sprite.setPosition(pos.x+32, pos.y+32);
        else if(rot==90) sprite.setPosition(pos.x, pos.y+32);
        else if(rot==270) sprite.setPosition(pos.x+32, pos.y);
    }
    else{ 
        sprite.move(0, speed);
        sprite.move(0, speed);
        sprite.move(0, speed);
        sprite.move(0, speed);
    }

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
    //sprite.move(speed,0);
    sf::Vector2f pos=sprite.getPosition();
    float rot = sprite.getRotation();
    if(rot!=90){
        sprite.setRotation(90.f);
        if(rot==0) sprite.setPosition(pos.x+32, pos.y);
        else if(rot==180) sprite.setPosition(pos.x, pos.y-32);
        else if(rot==270) sprite.setPosition(pos.x+32, pos.y-32);

    }
    else{
        sprite.move(speed,0);
        sprite.move(speed,0);
        sprite.move(speed,0);
        sprite.move(speed,0);
    }

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
    //sprite.move(-speed, 0);
    sf::Vector2f pos=sprite.getPosition();
    float rot = sprite.getRotation();
    if(rot!=270.f){
        sprite.setRotation(270.f);
        if(rot==0) sprite.setPosition(pos.x, pos.y+32);
        else if(rot==90) sprite.setPosition(pos.x-32, pos.y+32);
        else if(rot==180) sprite.setPosition(pos.x-32, pos.y);

    }
    else{
        sprite.move(-speed, 0);
        sprite.move(-speed, 0);
        sprite.move(-speed, 0);
        sprite.move(-speed, 0);
    }

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
    //std::cout<<TEMP_Speed<<std::endl;
    speed=TEMP_Speed;
    animTime=TEMP_AnimTime;
}
