#include "RenderSubSystem.h"
using namespace engine::game::subsystems;

void
RenderSubSystem::render()
{
	for (auto it = _components.begin(); it != _components.end(); it++)
	{
		(*it)->render();
	}
}