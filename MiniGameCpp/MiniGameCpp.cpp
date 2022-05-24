#include <iostream>
#include "raylib.h"
#include "GameObject.h"
#include "Spaceship.h"
int main()
{
    InitWindow(900, 900, "Mini Game CPP");

     Spaceship testSprite = Spaceship();

    while (!WindowShouldClose()) {
        //Update
        //Draw
        BeginDrawing();
        ClearBackground(GRAY);

       
        for (auto component : testSprite.Components) {
            component->DrawComponent(GetFrameTime());
        }
        EndDrawing();
    }
}
