#pragma once

#include "RenderOperation.h"

namespace engine
{
	namespace rendering
	{
		class TargetRender
		{
		public:
			TargetRender();
			~TargetRender();

			virtual void executeOperation(RenderOperation* operation) = 0;
		};

	}
}
