#pragma once
class Component
{
	
public:
	Component();
	~Component();
	virtual void UpdateComponent(float tick);
	virtual void DrawComponent(float tick);
};

