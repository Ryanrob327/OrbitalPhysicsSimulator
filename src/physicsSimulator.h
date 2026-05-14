#pragma once
#include <raylib.h>
#include "celestial-bodies/celestialBody.h"



class PhysicsSimulator{
    public:
        PhysicsSimulator();
        void ApplyGravity(CelestialBody& bodyA, CelestialBody& bodyB); // & symbol means to pass by reference
};