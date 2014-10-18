#include <iostream>
#include "Engine/Game/Game.h"

#include "Engine/Game/Scene/Scene.h"
#include "Engine/Utils/GenericFactory.h"

#include "Game/Scenes/StartMenuScene.h"


using namespace engine::utils;

void initScenes(Game & game);

int main()
{
    Game game;

    initScenes(game);

    game.init();
    game.start();

	return EXIT_SUCCESS;
}

void initScenes(Game & game)
{
    SceneManager& manager = game.sceneManager();
    manager.registerScene<StartMenuScene>("start");

    manager.activate("start");
}
