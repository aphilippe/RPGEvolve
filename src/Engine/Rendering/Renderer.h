#pragma once

#include <list>
#include "RenderOperation.h"

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
		};
	}
}

