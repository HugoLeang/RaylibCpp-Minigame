#pragma once
#include "SceneDefinition.h"
#include "SceneManager.h"
class MainMenuScene : public SceneDefinition
{
public :
	MainMenuScene(SceneManager* sceneManager) : SceneDefinition(sceneManager) {};
protected:
	void initiateScene() override;
	
};

