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

			void addOperation(const RenderOperation & operation);

			virtual void render() = 0;

		protected:
			std::list<const RenderOperation> _operations;
			std::shared_ptr<engine::rendering::TargetRender> _targetRender;
		};
	}
}

