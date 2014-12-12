#pragma once
#include "../Game/Entity/Entity.h"
namespace engine
{
	namespace rendering
	{
		class RenderOperation
		{
		public:
			RenderOperation();
			~RenderOperation();

			virtual void fillWithEntity(Entity* entity) = 0;
		};
	}
}

