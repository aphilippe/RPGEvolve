//
//  Scene.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "Scene.h"

void
Scene::update()
{
    for(auto it = _entities.begin(); it != _entities.end(); ++it)
    {
        (*it).get()->update();
    }
}

void
Scene::addEntity(std::shared_ptr<Entity> entity)
{
    _entities.push_back(entity);
}
