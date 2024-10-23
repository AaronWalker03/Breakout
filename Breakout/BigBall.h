#pragma once
#include <SFML/Graphics.hpp>


class GameManager;  // forward declaration



class BigBall {
public:
    BigBall(sf::RenderWindow* window, float velocity, GameManager* gameManager);
    ~BigBall();
    void update(float dt);
    void render();
    void setVelocity(float coeff, float duration);
    void setFireBall(float duration);

private:
    sf::CircleShape _sprite;
    sf::Vector2f _direction;
    sf::RenderWindow* _window;
    float _velocity;
    bool _isAlive;
    bool _isFireBall;
    float _timeWithPowerupEffect;

    GameManager* _gameManager;  // Reference to the GameManager


    static constexpr float RADIUS = 30.0f;
    static constexpr float VELOCITY = 300.0f;   // for reference.
};
