#pragma once
#include <vector>
#include "GameObject.h"
#include "SceneManager.h"
class SceneDefinition
{
public:
	std::vector<GameObject*> gameObjects;
	SceneDefinition(SceneManager* sceneManager);
private :
	SceneManager* sceneManager;
protected: 
	virtual void initiateScene() = 0;
};

