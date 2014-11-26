//
//  BehaviourComponent.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 05/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "BehaviourComponent.h"
#include "../../Game.h"

using namespace engine::game::component;

void
BehaviourComponent::init()
{
    Game::current->behaviourSubsystem().registerComponent(this);
}

void
BehaviourComponent::stop()
{
    if (this->isActive())
    {
        Component::stop();
        Game::current->behaviourSubsystem().unregisterComponent(this);
    }
}