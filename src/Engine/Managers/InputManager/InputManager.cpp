//
//  InputManager.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 12/08/14.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "InputManager.h"
#include <iostream>
#include <sstream>

void InputManager::update()
{
	std::getline(std::cin, this->_currentInput);
}

std::string
InputManager::getInput()
{
    return this->_currentInput;
}