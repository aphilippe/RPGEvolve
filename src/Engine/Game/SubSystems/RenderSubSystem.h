#pragma once
#include "../Component/subclasses/RenderComponent.h"
#include "AbstractSubSystem.h"
#include "../../Rendering/Renderer.h"
#include <map>
#include <memory>

namespace engine {
	namespace game {
		namespace subsystems {

            class RenderSubSystem : public AbstractSubSystem<engine::game::component::RenderComponent>
			{
                
			public:
				void attachRenderer(engine::rendering::Renderer* renderer, const std::string & key);
				engine::rendering::Renderer* getRenderer(const std::string & key);
				void render();

			protected:
				std::map<const std::string, std::unique_ptr<engine::rendering::Renderer>> _renderers;
			};

		}
	}
}