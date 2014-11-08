//
//  Component.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "Component.h"

using namespace engine::game::component;

Entity*
Component::getEntity()
{
	return _entity;
}

void
Component::setEntity(Entity* entity)
{
	_entity = entity;
}