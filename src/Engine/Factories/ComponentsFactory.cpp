//
//  ComponentsFactory.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "ComponentsFactory.h"

using namespace engine::factories;

ComponentFactory ComponentFactory::_instance = ComponentFactory();

ComponentFactory&
ComponentFactory::instance()
{
	return _instance;
}