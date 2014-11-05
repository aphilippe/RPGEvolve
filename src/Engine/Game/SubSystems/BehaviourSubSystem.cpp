//
//  BehaviourSubSystem.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 05/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "BehaviourSubSystem.h"

using namespace engine::game::subsystems;

void
BehaviourSubSystem::update()
{
    for (auto it = _components.begin(); it != _components.end(); it++)
    {
        (*it)->update();
    }
}

void
BehaviourSubSystem::registerComponent(engine::game::component::BehaviourComponent* component)
{
    _components.push_back(component);
}