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
#include "../Managers/InputManager/InputManager.h"
#include "../Managers/SceneManager/SceneManager.h"
#include "../Factories/EntityFactory.h"
#include "../Utils/GenericFactory.h"
#include "Component/Component.h"

class Game {

private:
    bool _living;
    InputManager _inputManager;
    SceneManager _sceneManager;
    engine::factories::EntityFactory _entityFactory;

    void end();

public:
    void init();
    void start();
    void stop();
    void update();

    InputManager& inputManager();
    SceneManager& sceneManager();
    engine::factories::EntityFactory& entityFactory();

	static Game* current;
};

#endif /* defined(__RPGEvolve__Game__) */
