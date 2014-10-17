//
//  SceneManager.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__SceneManager__
#define __RPGEvolve__SceneManager__

#include "../../Utils/GenericFactory.h"
#include "../../Game/Scene/Scene.h"

class SceneManager {
    
private:
    engine::utils::GenericFactory<Scene, int> _factory;
    
public:
    
    template<class SceneType> void registerScene(int key);
};

template<class SceneType>
void
SceneManager::registerScene(int key)
{
    _factory.registerObject<SceneType>(key);
}

#endif /* defined(__RPGEvolve__SceneManager__) */
