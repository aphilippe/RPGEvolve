#include "TextRenderOperation.h"
#include "../Components/TextComponent.h"
using namespace game::rendering;
using namespace game::components;

TextRenderOperation::TextRenderOperation()
{
}


TextRenderOperation::~TextRenderOperation()
{
}

void
TextRenderOperation::fillWithEntity(Entity* entity)
{
	std::shared_ptr<TextComponent> textComponent = std::static_pointer_cast<TextComponent>(entity->getComponent("TextComponent"));

	std::string text = textComponent.get()->getText();
	this->text = text;
}