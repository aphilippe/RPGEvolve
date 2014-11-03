//
//  Component.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 25/09/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__Component__
#define __RPGEvolve__Component__

#include <iostream>
#include <string>

namespace engine {
    namespace game {
        namespace component {
            
            class Component {
                
                
            public:
                
                // Call when component is add in Entity. Initialize all fields
                virtual void init() = 0;
                
                // Call when entity is add in Scene.
                virtual void awake() = 0;
                
                // Call every frame.
                virtual void update() = 0;
                
                // Call every frame after all update function have been called
                virtual void lateUpdate() = 0;
                
                // Call when component is disabled
                virtual void stop() = 0;
                
                virtual std::string componentId() = 0;
                
            };
            
        }
    }
}
#endif /* defined(__RPGEvolve__Component__) */
