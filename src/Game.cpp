#include "Game.hpp"

Game::Game() : window("that game"){}

void Game::Update(){
    window.Update();
}

void Game::LateUpdate(){}

void Game::Draw(){
    window.BeginDraw();
    window.Draw();
    window.EndDraw();
}

bool Game::IsRunning() const{
    return window.IsOpen();
}


