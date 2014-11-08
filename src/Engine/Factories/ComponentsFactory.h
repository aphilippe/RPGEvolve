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
#include "../Game/Component/subclasses/BehaviourComponent.h"
#include <memory>

namespace engine
{
    namespace factories
    {
        class ComponentFactory : public engine::utils::GenericFactory<engine::game::component::Component, std::string>
        {
        private:
			static ComponentFactory _instance;
            
        public:
			static ComponentFactory& instance();
        };
    }
}
#endif /* defined(__RPGEvolve__ComponentsFactory__) */
