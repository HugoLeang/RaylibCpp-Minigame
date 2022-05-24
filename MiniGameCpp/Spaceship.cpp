#include "Spaceship.h"
Spaceship::Spaceship()
{
	Components.push_back(new SpriteRenderer(this, Vector2{ 0,0 }, m_ShipSprite.c_str()));
}
Spaceship::~Spaceship()
{
}
