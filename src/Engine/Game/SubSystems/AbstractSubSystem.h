//
//  AbstractSubSystem.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 26/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__AbstractSubSystem__
#define __RPGEvolve__AbstractSubSystem__

#include <stdio.h>
#include <vector>

namespace engine {
    namespace game {
        namespace subsystems {
            
            template <typename CompType>
            class AbstractSubSystem {
            protected:
                std::vector<CompType*> _components;
                
            public:
                virtual void registerComponent(CompType* component);
                virtual void unregisterComponent(CompType* component);
            };
            
            template<typename CompType>
            void
            AbstractSubSystem<CompType>::registerComponent(CompType* component)
            {
                _components.push_back(component);
            }
            
            template<typename CompType>
            void
            AbstractSubSystem<CompType>::unregisterComponent(CompType* component)
            {
                auto it = std::find(_components.begin(), _components.end(), component);
                if (it != _components.end())
                {
                    _components.erase(it);
                }
            }
            
        }
    }
}

#endif /* defined(__RPGEvolve__AbstractSubSystem__) */
