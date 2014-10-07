//
//  InputManager.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 12/08/14.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "InputManager.h"
#include <iostream>

void InputManager::update()
{
    std::cin >> this->_currentInput;
}

char* InputManager::getInput()
{
    return this->_currentInput;
}