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

class Scene
{
private:

public:
	virtual void start() = 0;
	virtual void init() = 0;
	virtual void update() = 0;
	virtual void stop() = 0;

};

#endif /* defined(__RPGEvolve__Scene__) */
