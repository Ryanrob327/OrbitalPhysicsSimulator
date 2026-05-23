#include "rocket.h"
#include <raylib.h>



Rocket::Rocket(
    Vector2 position,
    Vector2 velocity,
    float mass,
    float radius,
    Color color
) : CelestialBody(
    position,
    velocity,
    mass,
    radius,
    color
)
{
    rotation = 0.0f;
    thrustPower = 0.0f;
    fuel = 100.0f;
}
