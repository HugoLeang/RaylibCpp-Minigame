#include "SceneManager.h"

SceneManager::SceneManager(SceneDefinition* startingScene)
{
	sceneLoaded = startingScene;
}

SceneManager::~SceneManager()
{
}

void SceneManager::loadScene(SceneDefinition* newSceneToLoad)
{
	delete(sceneLoaded);
	sceneLoaded = newSceneToLoad;
}

void SceneManager::updateSceneContent(float tick)
{
	if (sceneLoaded == nullptr)
		return;

	for ( auto gameObject : sceneLoaded->gameObjects)
	{
		for (auto component : gameObject->components) 
		{
			component->updateComponent(tick);
		}
	}
}

void SceneManager::drawSceneContent(float tick)
{
	if (sceneLoaded == nullptr)
		return;

	for (auto gameObject : sceneLoaded->gameObjects)
	{
		for (auto component : gameObject->components)
		{
			component->drawComponent(tick);
		}
	}
}


