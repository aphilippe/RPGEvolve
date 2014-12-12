#pragma once
#include "../../Engine/Rendering/RenderOperation.h"

namespace game
{
	namespace rendering
	{

		class TextRenderOperation :
			public engine::rendering::RenderOperation
		{
		public:
			TextRenderOperation();
			~TextRenderOperation();

			virtual void fillWithEntity(Entity* entity);

			std::string text;
			int position;
		};

	}
}