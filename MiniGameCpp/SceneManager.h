#pragma once
#include "SceneDefinition.h"
class SceneManager
{
public:
	SceneManager(SceneDefinition* startingScene);
	~SceneManager();
	void loadScene(SceneDefinition* newSceneToLoad);
	void updateSceneContent(float tick);
	void drawSceneContent(float tick);
private:
	SceneDefinition* sceneLoaded;
};

