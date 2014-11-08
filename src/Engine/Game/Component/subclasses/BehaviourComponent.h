//
//  BehaviourComponent.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 05/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__BehaviourComponent__
#define __RPGEvolve__BehaviourComponent__

#include <stdio.h>
#include "../Component.h"

namespace engine
{
    namespace game
    {
        namespace component
        {
            class BehaviourComponent : public engine::game::component::Component
            {
            public:

                virtual void init();
                
                virtual void update() = 0;
                virtual void lateUpdate() = 0;
            };
        }
    }
}

#endif /* defined(__RPGEvolve__BehaviourComponent__) */
