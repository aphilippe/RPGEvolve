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
RenderSubSystem::attachRenderer(std::unique_ptr<engine::rendering::Renderer> renderer, const std::string & key)
{
	_renderers[key] = std::move(renderer);
}