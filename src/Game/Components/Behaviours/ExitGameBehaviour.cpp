#include "ExitGameBehaviour.h"
#include "../../../Engine/Game/Game.h"
#include "../../../Engine/Game/Entity/Entity.h"
#include "../TextComponent.h"

using namespace game::components;

ExitGameBehaviour::ExitGameBehaviour()
{
}


ExitGameBehaviour::~ExitGameBehaviour()
{
}

std::string
ExitGameBehaviour::componentId()
{
	return "ExitGameBehaviour";
}

void
ExitGameBehaviour::update()
{
	Game* currentGame = Game::current;
	if (currentGame->inputManager().getInput() == "exit")
	{
		currentGame->stop();
		//std::shared_ptr<TextComponent> textComponent = std::static_pointer_cast<TextComponent>(this->getEntity()->getComponent("TextComponent"));
		//textComponent.get()->setText("Good bye");
	}
	else if (currentGame->inputManager().getInput() == "stop")
	{
		this->otherEntity.get()->setActive(false);
	}
}

void
ExitGameBehaviour::lateUpdate()
{
	
}

void
ExitGameBehaviour::awake()
{

}

void
ExitGameBehaviour::stop()
{

}