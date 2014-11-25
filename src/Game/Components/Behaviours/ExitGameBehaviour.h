#pragma once
#include "../../../Engine/Game/Component/subclasses/BehaviourComponent.h"
#include <memory>

namespace game {
	namespace components {

		class ExitGameBehaviour :
			public engine::game::component::BehaviourComponent
		{
		public:
			ExitGameBehaviour();
			~ExitGameBehaviour();

			std::shared_ptr<Entity> otherEntity;

			std::string componentId();
			virtual void awake();
			virtual void stop();
			virtual void update();
			virtual void lateUpdate();
		};

	}
}