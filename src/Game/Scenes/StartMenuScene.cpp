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
}


void
StartMenuScene::start()
{
    Scene::start();
    printf("\nStart\n");
}

void
StartMenuScene::update()
{
    Scene::update();
    printf("\nUpdate\n");
}

void
StartMenuScene::stop()
{
    printf("\nStop\n");
}
