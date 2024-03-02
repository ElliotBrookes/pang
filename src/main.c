#include "raylib.h"

int main() {
    const int wWidth = 500;
    const int wHeight = 500;

    InitWindow(wWidth, wHeight, "Pang");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        // Draw code here
        
        ClearBackground(RAYWHITE);
        DrawText("Pang", 190, 200, 20, BLACK);

        // No draw calls after this
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
