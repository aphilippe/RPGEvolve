#include "Renderer.h"

using namespace engine::rendering;

void
Renderer::addOperation(RenderOperation* operation)
{
	_operations.push_back(operation);
}

void
Renderer::render()
{
	for (auto it = _operations.begin(); it != _operations.end(); ++it)
	{
		_targetRender.get()->executeOperation(*it);
	}

	_operations.clear();

	int i = 0;
}