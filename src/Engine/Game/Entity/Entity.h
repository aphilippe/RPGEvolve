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

class Entity {


public:
    virtual void start();
	virtual void init();
	virtual void update();
	virtual void stop();
};

#endif /* defined(__RPGEvolve__Entity__) */
