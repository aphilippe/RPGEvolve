#ifndef ENTITYFACTORY_H
#define ENTITYFACTORY_H
#include <memory>
#include "../Game/Entity/Entity.h"
#include "../Utils/GenericFactory.h"
#include "../Game/Component/Component.h"

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
