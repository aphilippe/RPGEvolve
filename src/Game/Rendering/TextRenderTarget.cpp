#include "TextRenderTarget.h"
using namespace game::rendering;

TextRenderTarget::TextRenderTarget()
{
}


TextRenderTarget::~TextRenderTarget()
{
}

void
TextRenderTarget::executeOperation(engine::rendering::RenderOperation* operation)
{
	TextRenderOperation* textOperation = static_cast<TextRenderOperation*>(operation);
	std::cout << textOperation->text << std::endl;
}