#include "TextRenderComponent.h"
#include <iostream>

#include "../../Engine/Game/Entity/Entity.h"

#include "TextComponent.h"

using namespace game::components;

void
TextRenderComponent::render()
{
	std::shared_ptr<TextComponent> textComponent = std::static_pointer_cast<TextComponent>(this->getEntity()->getComponent("TextComponent"));

	std::string text = textComponent.get()->getText();

	std::cout << text << std::endl;
}
