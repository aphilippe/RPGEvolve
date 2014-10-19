//
//  Scene.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__Scene__
#define __RPGEvolve__Scene__

#include <iostream>
#include "../Entity/Entity.h"
#include <vector>
#include <memory>
#include "../Entity/Entity.h"

class Scene
{
private:
    std::vector<std::shared_ptr<Entity>> _entities;

public:
	virtual void start() = 0;
	virtual void init() = 0;
	virtual void update();
	virtual void stop() = 0;

    void addEntity(std::shared_ptr<Entity> entity);
};

#endif /* defined(__RPGEvolve__Scene__) */
