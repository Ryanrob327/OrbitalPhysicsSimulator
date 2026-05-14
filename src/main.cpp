#include <raylib.h>
#include "celestial-bodies/celestialBody.h"
#include "physicsSimulator.h"



int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 1600;
    constexpr int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "Orbital Physics Simulation");
    SetTargetFPS(60);
    
    CelestialBody earth({400,450}, {0,0}, 2000, 20, GREEN);
    CelestialBody moon({600,450}, {0,-32}, 500, 5, WHITE);
    PhysicsSimulator simulator;


    while (!WindowShouldClose())
    {
        // Get delta time
        float delta = GetFrameTime();

        // Updating
        simulator.ApplyGravity(earth, moon);
        earth.Update(delta);
        moon.Update(delta);

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