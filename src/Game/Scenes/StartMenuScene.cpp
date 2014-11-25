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

	std::shared_ptr<Entity> textEntity = game->entityFactory().createEntity();
	this->addEntity(textEntity);

	std::shared_ptr<TextComponent> textComponent = std::static_pointer_cast<TextComponent>( ComponentFactory::instance().createObject("TextComponent"));
	textEntity.get()->addComponent(textComponent);
	textComponent.get()->setText("Text");

	std::shared_ptr<TextRenderComponent> textRender = std::static_pointer_cast<TextRenderComponent>(ComponentFactory::instance().createObject("TextRenderComponent"));
	textEntity.get()->addComponent(textRender);

	std::shared_ptr<Entity> exitEntity = game->entityFactory().createEntity();
	this->addEntity(exitEntity);

	std::shared_ptr<ExitGameBehaviour> exitBehaviour = std::static_pointer_cast<ExitGameBehaviour>(ComponentFactory::instance().createObject("ExitGameBehaviour"));
	exitEntity.get()->addComponent(exitBehaviour);
	exitBehaviour.get()->otherEntity = textEntity;
}


void
StartMenuScene::start()
{
    Scene::start();
}

void
StartMenuScene::stop()
{
    Scene::stop();
}
