#include <raylib.h>
#include "celestial-bodies/celestialBody.h"



int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 1600;
    constexpr int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "Orbital Physics Simulation");
    SetTargetFPS(60);
    
    CelestialBody earth({400,450}, {0,0}, 597200, 20, GREEN);
    CelestialBody moon({1200,450}, {0,0}, 7347, 5, WHITE);


    while (!WindowShouldClose())
    {
        // Get delta time
        float deltaTime = GetFrameTime();

        // Updating
        

        // Collision

        
        BeginDrawing();
            // Drawing
            ClearBackground(BLACK);
            earth.Draw();
            moon.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}