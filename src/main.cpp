#include <raylib.h>



int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 1600;
    constexpr int screenHeight = 900;
    

    InitWindow(screenWidth, screenHeight, "Orbital Physics Simulation");
    SetTargetFPS(60);
    

    while (!WindowShouldClose())
    {
        // Get delta time
        float deltaTime = GetFrameTime();

        // Updating
        

        // Collision
  
        
        BeginDrawing();
            // Drawing
            ClearBackground(BLACK);
            
        EndDrawing();
    }
    
    CloseWindow();
}