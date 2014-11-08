//
//  TextComponent.h
//  RPGEvolve
//
//  Created by Adrien Philippe on 03/11/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#ifndef __RPGEvolve__TextComponent__
#define __RPGEvolve__TextComponent__

#include <stdio.h>
#include <string>
#include "../../Engine/Game/Component/subclasses/BehaviourComponent.h"

namespace game
{
    namespace components
    {
        class TextComponent : public engine::game::component::BehaviourComponent
        {
        protected:
            std::string _text;
            
        public:

            std::string getText() const;
            void setText(const std::string & text);
            
            std::string componentId();
            void init();
            void awake();
            void update();
            void lateUpdate();
            void stop();
        };
    }
}

#endif /* defined(__RPGEvolve__TextComponent__) */
