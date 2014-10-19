#ifndef ENTITYFACTORY_H
#define ENTITYFACTORY_H
#include <memory>
#include "../Game/Entity/Entity.h"

namespace engine {

namespace factories {

class EntityFactory
{
    public:
        EntityFactory();
        virtual ~EntityFactory();

        std::shared_ptr<Entity> createEntity();

    protected:
    private:
};
}
}
#endif // ENTITYFACTORY_H
