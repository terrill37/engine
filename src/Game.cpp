#include "Game.hpp"

//class tileMap;
Game::Game() : window("that game"),map(),player(playerTexture) {
    if(!playerTexture.loadFromFile("../textures/playerSprite.png")){
        std::cout<<"Player Texture Error\n";
        return;
    }
    //Player player(playerTexture);
        
    const int level[]={
	0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,
	0,1,1,1,4,4,1,1,0,0,0,0,2,0,0,1,
	1,1,0,0,0,0,0,0,0,4,3,3,3,3,3,2,
	0,1,0,0,2,4,0,0,3,3,2,2,0,0,0,2,
	0,0,1,0,2,0,0,3,3,3,0,0,2,2,2,3,
	0,0,1,0,3,0,2,2,0,0,1,1,1,2,0,3,
	2,0,1,0,4,0,2,2,2,0,1,1,1,1,1,1,
	0,0,1,0,4,2,2,2,0,0,0,0,1,1,1,1,
	};

	if(!map.load("../textures/tileset2.png", sf::Vector2u(32,32), level, 16, 8)){
		std::cout<<"cannot load tileset\n";
		return;
	}
}

void Game::Update(){
    window.Update(player);
}

void Game::LateUpdate(){}

void Game::Draw(){
    window.BeginDraw();
    
    sf::View view(player.getPosition(),sf::Vector2f(512.f,256.f));
    window.setView(view);
    
	window.Draw(map);    
    window.Draw(player.getSprite());

	window.EndDraw();
}

bool Game::IsRunning() const{
    return window.IsOpen();
}


