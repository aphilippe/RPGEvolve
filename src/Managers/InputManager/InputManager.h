//
//  InputManager.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 12/08/14.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__InputManager__
#define __RPGEvolve__InputManager__

#include <iostream>

class InputManager
{
private:
    char _currentInput[25];
    
public:
    void update();
    char* getInput();
};

#endif /* defined(__RPGEvolve__InputManager__) */
