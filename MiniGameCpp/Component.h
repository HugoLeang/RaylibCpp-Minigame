#pragma once
class Component
{
	
public:
	Component();
	~Component();
	virtual void updateComponent(float tick);
	virtual void drawComponent(float tick);
};

