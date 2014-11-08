#pragma once
#include "../../Engine/Game/Component/subclasses/RenderComponent.h"

namespace game
{
	namespace components
	{

		class TextRenderComponent :
			public engine::game::component::RenderComponent
		{
		public:

			virtual void render();
		};
	}
}
