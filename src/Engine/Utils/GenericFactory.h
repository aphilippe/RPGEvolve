#ifndef GenericFactory_H
#define GenericFactory_H

#include <map>
#include <memory>

namespace engine
{
	namespace utils
	{
		template<typename BaseClass, typename SubClass>
		std::shared_ptr<BaseClass>  genericCreator()
		{
			return std::shared_ptr<BaseClass>(new SubClass());
		}

		template<typename BaseClass, typename IdType>
		class GenericFactory
		{
		public:
			typedef std::shared_ptr<BaseClass> (*objectCreationFunction)(void);

			template<typename SubClass> bool registerObject(IdType pId);
			std::shared_ptr<BaseClass> createObject(IdType pId);
			
			

		private:
			std::map<IdType, objectCreationFunction> mClassCreatorMap;

		};

		template<typename BaseClass, typename IdType>
		std::shared_ptr<BaseClass> engine::utils::GenericFactory<BaseClass,IdType>::createObject(IdType pId)
		{
			if (mClassCreatorMap.find(pId) != mClassCreatorMap.end())
			{
				return mClassCreatorMap[pId]();
			}
			return NULL;
		}


		template<typename BaseClass, typename IdType>
		template<typename SubClass>
		bool GenericFactory<BaseClass,IdType>::registerObject(IdType pId)
		{
			mClassCreatorMap[pId] = &genericCreator<BaseClass, SubClass>;
			return true;
		}
	}
}
#endif//GenericFactory_H

