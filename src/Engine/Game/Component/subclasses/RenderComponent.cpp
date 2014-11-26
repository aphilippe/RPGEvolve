#include "RenderComponent.h"
#include "../../Game.h"
using namespace engine::game::component;

RenderComponent::RenderComponent()
{
}


RenderComponent::~RenderComponent()
{
}

void
RenderComponent::init()
{
	Game::current->renderSubsystem().registerComponent(this);
}

void
RenderComponent::stop()
{
    if (this->isActive())
    {
        Component::stop();
        Game::current->renderSubsystem().unregisterComponent(this);
    }
}

std::string
RenderComponent::componentId()
{
	return "renderComponent";
}
