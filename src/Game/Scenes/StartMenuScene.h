//
//  StartMenuScene.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 07/10/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__StartMenuScene__
#define __RPGEvolve__StartMenuScene__

#include <stdio.h>
#include "../../Engine/Game/Scene/Scene.h"

class StartMenuScene : public Scene {


public:
    StartMenuScene();

    virtual void init();
    virtual void start();
    virtual void stop();
};

#endif /* defined(__RPGEvolve__StartMenuScene__) */
