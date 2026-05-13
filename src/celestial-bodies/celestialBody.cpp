#include "celestialBody.h"
#include <raylib.h>



CelestialBody::CelestialBody(
    Vector2 position,
    Vector2 velocity,
    float mass,
    float radius,
    Color color
):
    position(position),
    velocity(velocity),
    acceleration({0.0f, 0.0f}),
    mass(mass),
    radius(radius),
    color(color)
{
}

// Update physics
void CelestialBody::Update(float deltaTime)
{
    // Velocity changes from acceleration
    velocity.x += acceleration.x * deltaTime;
    velocity.y += acceleration.y * deltaTime;

    // Position changes from velocity
    position.x += velocity.x * deltaTime;
    position.y += velocity.y * deltaTime;

    // Reset acceleration every frame
    acceleration = { 0.0f, 0.0f };
}

void CelestialBody::Draw(){
    DrawCircle(position.x, position.y, radius, color);
}