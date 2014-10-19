//
//  Game.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/09/14.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "Game.h"
#include "../Managers/InputManager/InputManager.h"
#include <cstring>

Game* Game::current = nullptr;

void
Game::init()
{
	Game::current = this;
}

void
Game::start()
{
    _living = true;
    this->update();
}

void
Game::stop()
{
    _living = false;
}

void
Game::update()
{
    while (_living)
    {
        //std::cout << "Entrez votre choix (\"exit\" to stop) :" << std::endl;
        _inputManager.update();
        //std::cout << "Votre choix est donc : " << _inputManager.getInput() << std::endl;

        _sceneManager.update();

        if (strcmp(_inputManager.getInput(), "exit") == 0) {
            std::cout << "Bye" << std::endl;
            this->stop();
        }
    }

    this->end();
}

InputManager&
Game::inputManager()
{
    return _inputManager;
}

SceneManager&
Game::sceneManager()
{
    return _sceneManager;
}

engine::factories::EntityFactory&
Game::entityFactory()
{
    return _entityFactory;
}

void
Game::end()
{

}
