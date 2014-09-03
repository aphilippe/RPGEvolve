//
//  Game.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/09/14.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "Game.h"
#include "../Managers/InputManager/InputManager.h"

void
Game::init()
{
    
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
        InputManager manager;
        std::cout << "Entrez votre choix (\"exit\" to stop) :" << std::endl;
        manager.update();
        std::cout << "Votre choix est donc : " << manager.getInput() << std::endl;
        
        if (strcmp(manager.getInput(), "exit") == 0) {
            std::cout << "Bye" << std::endl;
            this->stop();
        }
    }
}