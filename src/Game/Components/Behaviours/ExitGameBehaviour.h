#pragma once
#include "../../../Engine/Game/Component/subclasses/BehaviourComponent.h"

namespace game {
	namespace components {

		class ExitGameBehaviour :
			public engine::game::component::BehaviourComponent
		{
		public:
			ExitGameBehaviour();
			~ExitGameBehaviour();

			std::string componentId();
			virtual void awake();
			virtual void stop();
			virtual void update();
			virtual void lateUpdate();
		};

	}
}