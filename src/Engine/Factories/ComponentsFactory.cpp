//
//  ComponentsFactory.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "ComponentsFactory.h"

using namespace engine::factories;

std::shared_ptr<engine::game::component::Component>
ComponentFactory::createComponent(const std::string & key)
{
    std::hash<std::string> hash_fn;
    return _creator.createObject(hash_fn(key));
}