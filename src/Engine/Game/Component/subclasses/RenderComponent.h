#pragma once
#include "../Component.h"

namespace engine
{
	namespace game
	{
		namespace component
		{

			class RenderComponent :
				public Component
			{
			public:
				RenderComponent();
				~RenderComponent();

				virtual void init();
				virtual void awake();
				virtual void stop();
				virtual void render() = 0;

				std::string componentId();
			};
		}
	}
}

