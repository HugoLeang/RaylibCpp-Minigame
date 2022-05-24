#pragma once
#include <vector>
#include "Component.h"
#include "raylib.h"
class GameObject
{
public:
	GameObject(Vector2 startPos);
	GameObject();
    ~GameObject();
	std::vector <Component*> components;
	Transform transform;
};

