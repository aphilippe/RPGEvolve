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
    engine::utils::GenericFactory<Scene, size_t> _factory;
    std::shared_ptr<Scene> _currentScene;
    std::shared_ptr<Scene> _nextScene;

public:

    template<class SceneType> void registerScene(const std::string & key);
    void activate(const std::string & name);
    void update();
    void stop();
};

template<class SceneType>
void
SceneManager::registerScene(const std::string & key)
{
    std::hash<std::string> hash_fn;
    _factory.registerObject<SceneType>(hash_fn(key));
}

#endif /* defined(__RPGEvolve__SceneManager__) */
