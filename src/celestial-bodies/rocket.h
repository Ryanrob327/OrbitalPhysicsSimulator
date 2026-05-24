#pragma once
#include <raylib.h>
#include "celestialBody.h"



class Rocket : public CelestialBody{
    public:
        Rocket(
            Vector2 position,
            Vector2 velocity,
            float mass,
            float radius,
            Color color
        );

        float rotation;
        float thrustPower;
        float fuel;
};