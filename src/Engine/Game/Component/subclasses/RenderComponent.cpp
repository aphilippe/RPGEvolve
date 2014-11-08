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
RenderComponent::awake()
{

}

void
RenderComponent::stop()
{

}

std::string
RenderComponent::componentId()
{
	return "renderComponent";
}
