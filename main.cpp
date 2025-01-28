#include <iostream>
#include "raylib.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    //assignment 2
    InitWindow(800, 600, "Interactive Shapes");
    Color rectColor = BLUE;
    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_SPACE)) {
            rectColor = RED;
        }
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(200, 150, 400, 300, rectColor);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
