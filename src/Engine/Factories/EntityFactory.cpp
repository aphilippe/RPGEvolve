#include "EntityFactory.h"

using namespace engine::factories;

EntityFactory::EntityFactory()
{
    //ctor
}

EntityFactory::~EntityFactory()
{
    //dtor
}

std::shared_ptr<Entity>
EntityFactory::createEntity()
{
    return std::shared_ptr<Entity>(new Entity());
}
