//
//  BehaviourSubSystem.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 05/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__BehaviourSubSystem__
#define __RPGEvolve__BehaviourSubSystem__

#include <stdio.h>
#include <vector>
#include "../Component/subclasses/BehaviourComponent.h"
#include <memory>
#include "BehaviourComponent.h"

namespace engine {
    namespace game {
        namespace subsystems {
            
            class BehaviourSubSystem
            {
            private:
                std::vector<engine::game::component::BehaviourComponent*> _components;
            public:
                void update();
                void registerComponent(component::BehaviourComponent* component);
            };
            
        }
        
    }
}

#endif /* defined(__RPGEvolve__BehaviourSubSystem__) */
