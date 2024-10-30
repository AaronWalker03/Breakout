#pragma once

#include "PowerupManager.h"

class PowerupInverseControls : public PowerupBase
{
public:
    PowerupInverseControls(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupInverseControls();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};