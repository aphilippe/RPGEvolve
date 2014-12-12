#include "RenderSubSystem.h"
using namespace engine::game::subsystems;

void
RenderSubSystem::render()
{
	for (auto it = _components.begin(); it != _components.end(); it++)
	{
		(*it)->render();
	}

	for (auto it = _renderers.begin(); it != _renderers.end(); ++it)
	{
		it->second.get()->render();
	}
}

void
RenderSubSystem::attachRenderer(engine::rendering::Renderer* renderer, const std::string & key)
{
	_renderers[key] = std::unique_ptr<engine::rendering::Renderer>(renderer);
}

engine::rendering::Renderer*
RenderSubSystem::getRenderer(const std::string & key)
{
	return _renderers[key].get();
}