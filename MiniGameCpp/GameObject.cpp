#include "GameObject.h"

GameObject::GameObject(Vector2 startPos)
{
	transform.translation = {startPos.x,startPos.y};
}

GameObject::GameObject()
{
	transform.translation = Vector3{0,0};
}

GameObject::~GameObject()
{
}
