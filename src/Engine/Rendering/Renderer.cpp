#include "Renderer.h"

using namespace engine::rendering;

void
Renderer::addOperation(const RenderOperation & operation)
{
	_operations.push_back(operation);
}