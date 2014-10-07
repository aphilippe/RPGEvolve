//
//  SceneFactory.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 07/10/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "SceneFactory.h"

Scene*
SceneFactory::createNewScene()
{
    Scene* scene = new Scene();
    
    return scene;
}