//
//  Scene.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "Scene.h"

void
Scene::start()
{
    for(auto it = _entities.begin(); it != _entities.end(); ++it)
    {
        (*it).get()->start();
    }
}

void
Scene::addEntity(std::shared_ptr<Entity> entity)
{
    _entities.push_back(entity);
    // TODO: start entity if scene is living
}

void
Scene::stop()
{
    for(auto it = _entities.begin(); it != _entities.end(); ++it)
    {
        (*it).get()->stop();
    }
    _entities.clear();
}