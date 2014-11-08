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
        _inputManager.update();

        _sceneManager.update();
        
        _behaviourSubsystem.update();

		_renderSubsystem.render();
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

engine::game::subsystems::BehaviourSubSystem&
Game::behaviourSubsystem()
{
    return _behaviourSubsystem;
}

engine::game::subsystems::RenderSubSystem&
Game::renderSubsystem()
{
	return _renderSubsystem;
}

void
Game::end()
{
    _sceneManager.stop();
}
