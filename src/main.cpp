#include <iostream>
#include "Engine/Game/Game.h"

#include "Engine/Game/Scene/Scene.h"
#include "Engine/Utils/GenericFactory.h"

#include "StartMenuScene.h"


using namespace engine::utils;

int main()
{    
    Game game;
    game.sceneManager().registerScene<StartMenuScene>(1);
    game.init();
    game.start();

	return EXIT_SUCCESS;
}