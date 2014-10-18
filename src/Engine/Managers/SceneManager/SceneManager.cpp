//
//  SceneManager.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "SceneManager.h"

void
SceneManager::activate(const std::string & name)
{
    std::hash<std::string> hash_fn;
    _nextScene = _factory.createObject(hash_fn(name));
    _nextScene.get()->init();
}

void
SceneManager::update()
{
    if(_nextScene != nullptr)
    {
        if(_currentScene != nullptr)
        {
            _currentScene.get()->stop();
        }

        _currentScene = _nextScene;
        _currentScene.get()->start();

        _nextScene = nullptr;
    }

    _currentScene.get()->update();
}
