#include "raylib.h"

int main()
{
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Hello Raylib!");

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Hello Raylib!", 190, 200, 40, DARKGRAY);
            DrawText("Press ESC to close", 250, 260, 20, GRAY);
        EndDrawing();
    }

    // Cleanup
    CloseWindow();

    return 0;
}

