#include "Game.hpp"

//class tileMap;
Game::Game() : window("that game"){}

void Game::Update(){
    window.Update();
}

void Game::LateUpdate(){}

void Game::Draw(){
    window.BeginDraw();
    
	//std::cout<<"begin draw\n";
	//map
	
	const int level[]={
	0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,
	0,1,1,1,1,1,1,1,0,0,0,0,2,0,0,1,
	1,1,0,0,0,0,0,0,0,3,3,3,3,3,3,2,
	0,1,0,0,2,0,0,0,3,3,2,2,0,0,0,2,
	0,0,1,0,2,0,0,3,3,3,0,0,2,2,2,3,
	0,0,1,0,3,0,2,2,0,0,1,1,1,2,0,3,
	2,0,1,0,3,0,2,2,2,0,1,1,1,1,1,1,
	0,0,1,0,3,2,2,2,0,0,0,0,1,1,1,1,
	};	

	tileMap map;
	if(!map.load("../tileset.png", sf::Vector2u(32,32), level, 16, 8)){
		std::cout<<"cannot load tileset\n";
		return;
	}
	
	//map.load("../tileset.png", sf::Vector2u(32,32), level, 16, 8);
	
	//std::cout<<"Draw\n";
	window.Draw(map);
    
	window.EndDraw();
}

bool Game::IsRunning() const{
    return window.IsOpen();
}


