#include "raylib.h"

int main(void)
{   
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Conway's game of life");                   
   
    while (!WindowShouldClose())    
    {       
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("", 190, 200, 20, GREEN);

        EndDrawing();        
    }
   
    CloseWindow(); 

    return 0;
}