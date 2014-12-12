#include "TextRenderComponent.h"
#include <iostream>

#include "../../Engine/Game/Entity/Entity.h"
#include "../Rendering/TextRenderer.h"
#include "../../Engine/Game/SubSystems/RenderSubSystem.h"
#include "../../Engine/Game/Game.h"

#include "TextComponent.h"

using namespace game::components;

void
TextRenderComponent::render()
{
	TextRenderer* renderer = static_cast<TextRenderer*>(Game::current->renderSubsystem().getRenderer("text"));

	operation.fillWithEntity(this->getEntity());

	renderer->addOperation(&operation);
}

void
TextRenderComponent::registerRenderer()
{
	engine::game::subsystems::RenderSubSystem& subsystem = Game::current->renderSubsystem();

	if (subsystem.getRenderer("text") == nullptr)
	{
		TextRenderer* renderer = new TextRenderer();
		Game::current->renderSubsystem().attachRenderer(renderer, "text");
	}
}