#pragma once
#include "GameObject.h"
#include "Component.h"
#include "raylib.h"
class SpriteRenderer : public Component
{
	Texture2D m_Texture;
	GameObject* m_GameObject;
	Color m_Tint;
public:
	SpriteRenderer(GameObject* gameObject, Vector2 initPos, Color tint, const char* fileName);
	SpriteRenderer(GameObject* gameObject,Vector2 initPos,const char* fileName);
	SpriteRenderer(GameObject* gameObject, Vector2 initPos);
	~SpriteRenderer();
	void updateComponent(float tick) override;
	void drawComponent(float tick) override;
};

