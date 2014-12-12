#pragma once

#include <list>
#include <memory>
#include "RenderOperation.h"
#include "TargetRender.h"


namespace engine
{
	namespace rendering
	{
		class Renderer
		{
		public:

			void addOperation(RenderOperation* operation);

			virtual void render();

		protected:
			std::list<RenderOperation*> _operations;
			std::shared_ptr<engine::rendering::TargetRender> _targetRender;
		};
	}
}

