#pragma once
#include <raylib.h>
#include "celestial-bodies/rocket.h"



class RocketController{
    public:
        RocketController();

        enum MissionPhase{
            LAUNCH,
            TRANSFER,
            MOON_FLYBY,
            RETURN,
            LAND
        };

        MissionPhase phase;

        void Update(
            Rocket& rocket,
            CelestialBody& earth,
            CelestialBody& moon,
            float delta
        );
};