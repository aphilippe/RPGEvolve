//
//  ComponentsFactory.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__ComponentsFactory__
#define __RPGEvolve__ComponentsFactory__

#include "../Utils/GenericFactory.h"
#include "../Game/Component/Component.h"
#include <memory>

namespace engine
{
    namespace factories
    {
        class ComponentFactory
        {
        private:
            engine::utils::GenericFactory<engine::game::component::Component, size_t> _creator;
            
        public:
            template<class ComponentType> void registerComponent(const std::string & key);
            std::shared_ptr<engine::game::component::Component> createComponent(const std::string & key);
        };


        template<class ComponentType>
        void
        ComponentFactory::registerComponent(const std::string & key)
        {
            std::hash<std::string> hash_fn;
            _creator.registerObject<ComponentType>(hash_fn(key));
        }
    }
}
#endif /* defined(__RPGEvolve__ComponentsFactory__) */
