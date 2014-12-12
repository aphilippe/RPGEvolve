#pragma once
#include "../../Engine/Game/Component/subclasses/RenderComponent.h"
#include "../Rendering/TextRenderOperation.h"

namespace game
{
	namespace components
	{

		class TextRenderComponent :
			public engine::game::component::RenderComponent
		{
		public:

			virtual void render();

		protected:
			game::rendering::TextRenderOperation operation;

			virtual void registerRenderer();
		};
	}
}
