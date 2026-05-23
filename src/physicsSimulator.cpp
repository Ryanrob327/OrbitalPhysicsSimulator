#include <raylib.h>
#include "raymath.h"
#include "physicsSimulator.h"



PhysicsSimulator::PhysicsSimulator(){
}

void PhysicsSimulator::ApplyGravity(CelestialBody& bodyA, CelestialBody& bodyB){ // & symbol means to pass by reference
    const float G = 100.0f;
    Vector2 direction = Vector2Subtract(bodyB.position, bodyA.position);
    float distance = Vector2Length(direction);
    Vector2 normal = Vector2Normalize(direction);
    float force = (G * bodyA.mass * bodyB.mass) / (distance * distance);

    // F = ma
    float accelerationA = force / bodyA.mass;
    float accelerationB = force / bodyB.mass;

    // Apply acceleration toward each other
    bodyA.acceleration.x += normal.x * accelerationA;
    bodyA.acceleration.y += normal.y * accelerationA;

    bodyB.acceleration.x -= normal.x * accelerationB;
    bodyB.acceleration.y -= normal.y * accelerationB;
}