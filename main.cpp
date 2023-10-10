#include <raylib.h>
#include "ball.h"

int main()
{
    Color darkGreen = Color{20, 160, 133, 255};

    int screenWidth = 800;
    int screenHeight = 600;

    Ball ball = Ball();

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkGreen);
        ball.Update();
        ball.Draw();
        EndDrawing();
    }

    CloseWindow();
}