#pragma once
#include <raylib.h>



class CelestialBody{
    public:
        CelestialBody(
            Vector2 position,
            Vector2 velocity,
            float mass,
            float radius,
            Color color
        );
        void Draw();
        void Update(float deltaTime);

        Vector2 position;
        Vector2 velocity;
        Vector2 acceleration;
        float mass;
        float radius;
        Color color;
};