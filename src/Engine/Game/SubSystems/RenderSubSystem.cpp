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

void
RenderSubSystem::registerComponent(engine::game::component::RenderComponent* component)
{
	_components.push_back(component);
}
