//
//  SceneFactory.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 07/10/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__SceneFactory__
#define __RPGEvolve__SceneFactory__

#include <stdio.h>
#include "../Game/Scene/Scene.h"


class SceneFactory {
    
    
public:
    Scene* createNewScene();
};

#endif /* defined(__RPGEvolve__SceneFactory__) */
