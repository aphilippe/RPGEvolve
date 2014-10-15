#include <iostream>
#include "Engine/Game/Game.h"

#include "Engine/Game/Scene/Scene.h"
#include "Engine/Utils/GenericFactory.h"

#include "StartMenuScene.h"

using namespace engine::utils;

int main()
{
    
    GenericFactory<Scene, int> factory;
    factory.registerObject<StartMenuScene>(1);
    factory.createObject(1);
    
    Game game;
    
    game.init();
    game.start();

	return EXIT_SUCCESS;
}