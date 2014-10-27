//
//  Entity.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "Entity.h"

void
Entity::start()
{
    printf("Entity start");
	for (auto it = _components.begin(); it != _components.end(); it++)
	{
		it->second.get()->awake();
	}
}

void
Entity::init()
{
    printf("Entity init");
}

void
Entity::update()
{
    printf("Entity update");
	for (auto it = _components.begin(); it != _components.end(); it++)
	{
		it->second.get()->update();
	}
}

void
Entity::stop()
{
    printf("Entity stop");
	for (auto it = _components.begin(); it != _components.end(); it++)
	{
		it->second.get()->stop();
	}
}

void
Entity::addComponent(std::shared_ptr<Component> component)
{
	std::string componentId = component.get()->componentId();
	if (_components.find(componentId) != _components.end())
	{
		this->removeComponent(componentId);
	}

	_components[componentId] = component;
}

void
Entity::removeComponent(const std::string & componentId)
{
	auto it = _components.find(componentId);
	if (it == _components.end())
	{
		throw std::exception("Trying to remove a component that doesn't exist");
	}

	Component* component = it->second.get();
	component->stop();

	_components.erase(it);
}

std::shared_ptr<Component>
Entity::getComponent(const std::string & componentId)
{
	return _components[componentId];
}