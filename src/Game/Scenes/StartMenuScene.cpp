//
//  StartMenuScene.cpp
//  RPGEvolve
//
//  Created by Adrien Philippe on 07/10/2014.
//  Copyright (c) 2014 aphilippe. All rights reserved.
//

#include "StartMenuScene.h"
#include "../../Engine/Game/Game.h"
#include <memory>
#include "../Components/TextComponent.h"
#include "../../Engine/Factories/ComponentsFactory.h"

using namespace game::components;
using namespace engine::factories;

StartMenuScene::StartMenuScene() : Scene()
{

}

void
StartMenuScene::init()
{
    printf("\nInit\n");
    Game* game = Game::current;

    std::shared_ptr<Entity> entity = game->entityFactory().createEntity();
    this->addEntity(entity);

	std::shared_ptr<TextComponent> textComponent = std::static_pointer_cast<TextComponent>( ComponentFactory::instance().createObject("TextComponent"));
	entity.get()->addComponent(textComponent);
}


void
StartMenuScene::start()
{
    Scene::start();
    printf("\nStart\n");
}

void
StartMenuScene::stop()
{
    Scene::stop();
    printf("\nStop\n");
}
