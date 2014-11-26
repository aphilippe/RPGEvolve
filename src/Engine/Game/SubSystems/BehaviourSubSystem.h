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
#include "../Component/subclasses/BehaviourComponent.h"
#include "AbstractSubSystem.h"

namespace engine {
    namespace game {
        namespace subsystems {
            
            class BehaviourSubSystem : public AbstractSubSystem<engine::game::component::BehaviourComponent>
            {
            public:
                void update();
            };
            
        }
        
    }
}

#endif /* defined(__RPGEvolve__BehaviourSubSystem__) */
