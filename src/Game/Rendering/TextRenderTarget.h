#pragma once
#include "../../Engine/Rendering/TargetRender.h"
#include "TextRenderOperation.h"

namespace game
{
	namespace rendering
	{

		class TextRenderTarget :
			public engine::rendering::TargetRender
		{
		public:
			TextRenderTarget();
			~TextRenderTarget();

			virtual void executeOperation(engine::rendering::RenderOperation* operation);
		};

	}
}