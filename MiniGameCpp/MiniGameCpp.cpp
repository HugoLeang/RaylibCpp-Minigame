#include <iostream>
#include "raylib.h"
#include "GameObject.h"
#include "Spaceship.h"
#include "SceneManager.h"
#include "MainMenuScene.h"
int main()
{
    InitWindow(900, 900, "Mini Game CPP");
    SceneManager* sceneManager = new SceneManager(new MainMenuScene(sceneManager));

    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        //Update
        sceneManager->updateSceneContent(deltaTime);
        //Draw
        BeginDrawing();
        sceneManager->drawSceneContent(deltaTime);
        EndDrawing();
    }
}
