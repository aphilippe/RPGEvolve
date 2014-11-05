//
//  Entity.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__Entity__
#define __RPGEvolve__Entity__

#include <iostream>
#include <map>
#include <memory>
#include "../Component/Component.h"

class Entity {
private:
    std::map<std::string, std::shared_ptr<engine::game::component::Component>> _components;

public:
    virtual void start();
	virtual void init();
	virtual void stop();

	void addComponent(std::shared_ptr<engine::game::component::Component> component);
	void removeComponent(const std::string & componentId);
	std::shared_ptr<engine::game::component::Component> getComponent(const std::string & componentId);
};

#endif /* defined(__RPGEvolve__Entity__) */
