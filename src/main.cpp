#include <raylib.h>
#include "celestial-bodies/celestialBody.h"
#include "celestial-bodies/rocket.h"
#include "physicsSimulator.h"



void UpdateCamera(Camera2D& camera, float delta){
    float cameraSpeed = 500.0f;
    Vector2 input = {0, 0};
    if (IsKeyDown(KEY_RIGHT)) input.x += 1; // camera movement control
    if (IsKeyDown(KEY_LEFT))  input.x -= 1;
    if (IsKeyDown(KEY_DOWN))  input.y += 1;
    if (IsKeyDown(KEY_UP))    input.y -= 1;

    camera.target.x += input.x * cameraSpeed * delta; // smooth camera movement
    camera.target.y += input.y * cameraSpeed * delta;

    camera.zoom += GetMouseWheelMove() * 0.1f; // camera scroll control
    if (camera.zoom < 0.2f) camera.zoom = 0.2f;
    if (camera.zoom > 5.0f) camera.zoom = 5.0f;
}


int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 1600;
    constexpr int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "Orbital Physics Simulation");
    SetTargetFPS(60);
    
    CelestialBody earth({400,450}, {0,0}, 2000, 20, GREEN);
    CelestialBody moon({600,450}, {0,-32}, 500, 5, WHITE);
    Rocket rocket({500,450}, {0,15}, 2, 3, RED);
    PhysicsSimulator simulator;

    // Camera
    Camera2D camera = {0};
    camera.target = {800, 450};
    camera.offset = {1600/2.0f, 900/2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;


    while (!WindowShouldClose()) // Main Game Loop
    {
        // Get delta time
        float delta = GetFrameTime();

        // Updating
        simulator.ApplyGravity(earth, moon);
        simulator.ApplyGravity(earth, rocket);
        simulator.ApplyGravity(rocket, moon);
        earth.Update(delta);
        moon.Update(delta);
        rocket.Update(delta);

        // Collision


        // Camera
        UpdateCamera(camera, delta);

        
        BeginDrawing();
            // Drawing
            ClearBackground(BLACK);
            BeginMode2D(camera);
                earth.Draw();
                moon.Draw();
                rocket.Draw();
            EndMode2D();
        EndDrawing();
    }
    
    CloseWindow();
}