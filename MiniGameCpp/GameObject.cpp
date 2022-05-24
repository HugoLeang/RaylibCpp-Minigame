#include "GameObject.h"

GameObject::GameObject(Vector2 startPos)
{
	m_Transform.translation = {startPos.x,startPos.y};
}

GameObject::GameObject()
{
	m_Transform.translation = Vector3{0,0};
}

GameObject::~GameObject()
{
}
