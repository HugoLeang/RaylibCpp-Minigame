#include <iostream>
#include "raylib.h"
#include "GameObject.h"
#include "Spaceship.h"
int main()
{
	InitWindow(900, 900, "Mini Game CPP");

	while (!WindowShouldClose()) {
		float deltaTime = GetFrameTime();
		//Update

		//Draw
		BeginDrawing();

		EndDrawing();
	}
}
