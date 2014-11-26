#pragma once
#include "../Component/subclasses/RenderComponent.h"
#include "AbstractSubSystem.h"

namespace engine {
	namespace game {
		namespace subsystems {

            class RenderSubSystem : public AbstractSubSystem<engine::game::component::RenderComponent>
			{
                
			public:
				void render();
			};

		}
	}
}