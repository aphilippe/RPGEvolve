#include "TextRenderer.h"
#include "TextRenderTarget.h"

using namespace game::rendering;

TextRenderer::TextRenderer()
{
	this->_targetRender = std::shared_ptr<TextRenderTarget>(new TextRenderTarget());
}


TextRenderer::~TextRenderer()
{
}
