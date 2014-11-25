#pragma once
#include <vector>
#include "../Component/subclasses/RenderComponent.h"

namespace engine {
	namespace game {
		namespace subsystems {

			class RenderSubSystem
			{
			private:
				std::vector<engine::game::component::RenderComponent*> _components;
			public:
				void render();
				void registerComponent(component::RenderComponent* component);
				void unregisterComponent(component::RenderComponent* component);
			};

		}
	}
}