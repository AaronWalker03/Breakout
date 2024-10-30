#include "PowerupInverseControls.h"

PowerupInverseControls::PowerupInverseControls(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(paddleEffectsColour); // Same colour as smallPaddle
}

PowerupInverseControls::~PowerupInverseControls()
{
}

std::pair<POWERUPS, float> PowerupInverseControls::applyEffect()
{
    _paddle->setSpeed(-1.0f, 5.0f);
    return { inversePaddle, 5.0f };
}