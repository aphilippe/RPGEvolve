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
#include "../../Engine/Factories/ComponentsFactory.h"

#include "../Components/TextComponent.h"
#include "../Components/TextRenderComponent.h"
#include "../Components/Behaviours/ExitGameBehaviour.h"

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

	std::shared_ptr<TextRenderComponent> textRender = std::static_pointer_cast<TextRenderComponent>(ComponentFactory::instance().createObject("TextRenderComponent"));
	entity.get()->addComponent(textRender);

	std::shared_ptr<ExitGameBehaviour> exitBehaviour = std::static_pointer_cast<ExitGameBehaviour>(ComponentFactory::instance().createObject("ExitGameBehaviour"));
	entity.get()->addComponent(exitBehaviour);
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
