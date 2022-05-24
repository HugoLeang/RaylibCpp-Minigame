#pragma once
#include "GameObject.h"
#include "SpriteRenderer.h"
#include <string>
class Spaceship : public GameObject
{
	const std::string m_ShipSprite = "Resources/Ships/main_ship.png";
public: 
	Spaceship();
	~Spaceship();
};

