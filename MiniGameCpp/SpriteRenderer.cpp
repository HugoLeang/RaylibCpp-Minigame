#include "GameObject.h"
#include "SpriteRenderer.h"
#include "raylib.h"
#include <iostream>
SpriteRenderer::SpriteRenderer(GameObject* gameObject, Vector2 initPos, Color tint, const char* fileName)
{
	m_Texture = LoadTexture(fileName);
	m_GameObject = gameObject;
	m_Tint = tint;
}
SpriteRenderer::SpriteRenderer(GameObject* gameObject,Vector2 initPos, const char* fileName)
{
	m_Texture = LoadTexture(fileName);
	m_GameObject = gameObject;
	m_Tint = WHITE;
}

SpriteRenderer::~SpriteRenderer()
{
	UnloadTexture(m_Texture);
}

void SpriteRenderer::updateComponent(float tick)
{
}

void SpriteRenderer::drawComponent(float tick)
{
	Vector3 spritePos = m_GameObject->transform.translation;
	DrawTexture(m_Texture,spritePos.x,spritePos.y,m_Tint);
}
