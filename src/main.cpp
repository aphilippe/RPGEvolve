#include <iostream>
#include "Engine/Game/Game.h"

#include "Engine/Game/Scene/Scene.h"
#include "Engine/Utils/GenericFactory.h"
#include "Engine/Factories/ComponentsFactory.h"

#include "Game/Scenes/StartMenuScene.h"
#include "Game/Components/TextComponent.h"


using namespace engine::utils;

void initScenes(Game & game);
void initComponentsFactory();

int main()
{
    Game game;

	game.init();

	initComponentsFactory();
    initScenes(game);

    game.start();

	return EXIT_SUCCESS;
}

void initScenes(Game & game)
{
    SceneManager& manager = game.sceneManager();
    manager.registerScene<StartMenuScene>("start");

    manager.activate("start");
}

void initComponentsFactory()
{
	engine::factories::ComponentFactory& factory = engine::factories::ComponentFactory::instance();

	factory.registerObject<game::components::TextComponent>("TextComponent");
}