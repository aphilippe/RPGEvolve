//
//  Game.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/09/14.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__Game__
#define __RPGEvolve__Game__

#include <iostream>

class Game {
    
private:
    bool _living;
    
public:
    void init();
    void start();
    void stop();
    void update();

	static Game* current;
};

#endif /* defined(__RPGEvolve__Game__) */
