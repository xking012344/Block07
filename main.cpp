#include <iostream>
#include "raylib.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    // //window management
    // InitWindow(800, 600, "Window Management Example");
    //
    // SetTargetFPS(60); // Set FPS to 60
    //
    // while (!WindowShouldClose()) {
    //     BeginDrawing();
    //     ClearBackground(RAYWHITE);
    //     DrawText("Hello, Raylib!", 350, 280, 20, DARKGRAY);
    //     EndDrawing();
    // }
    //
    // CloseWindow();
    //
    // //basic input handling
    // InitWindow(800, 600, "Input Handling Example");
    //
    // while (!WindowShouldClose()) {
    //     BeginDrawing();
    //     ClearBackground(RAYWHITE);
    //
    //     if (IsKeyPressed(KEY_SPACE)) {
    //         DrawText("Spacebar pressed!", 300, 280, 20, DARKGREEN);
    //     }
    //
    //     EndDrawing();
    // }
    //
    // CloseWindow();
    //
    // //drawing shapes and text
    // InitWindow(800, 600, "Drawing Shapes Example");
    //
    // while (!WindowShouldClose()) {
    //     BeginDrawing();
    //     ClearBackground(RAYWHITE);
    //
    //     DrawRectangle(200, 150, 400, 300, SKYBLUE);
    //     DrawCircle(400, 300, 50, RED);
    //     DrawText("Shapes and Text", 310, 50, 20, DARKGRAY);
    //
    //     EndDrawing();
    // }
    //
    // CloseWindow();
    //
    // //working with colors
    // InitWindow(800, 600, "Working with Colors");
    //
    // Color customColor = { 128, 0, 128, 255 }; // Purple
    //
    // while (!WindowShouldClose()) {
    //     BeginDrawing();
    //     ClearBackground(customColor);
    //     DrawText("Custom Color Background", 250, 280, 20, RAYWHITE);
    //     EndDrawing();
    // }
    //
    // CloseWindow();

    //assignment 1
    // InitWindow(800, 600, "My First Raylib Window");
    //
    // while (!WindowShouldClose()) {
    //     BeginDrawing();
    //     ClearBackground(LIGHTGRAY);
    //     DrawText("Welcome to Raylib!", 310, 280, 20, DARKGRAY);
    //     EndDrawing();
    // }
    //
    // CloseWindow();

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
