#include "Game.hpp"

Game::Game() : window("that one game engine"){}

void Game::Update(){
    window.Update();
}

void Game::LateUpdate(){}

void Game::Draw(){
    //window.BeginDraw();

    //window.EndDraw();
}

bool Game::IsRunning() const{
    return window.IsOpen();
}


