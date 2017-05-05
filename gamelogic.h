#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include "game.h"
#include <SFML/Graphics.hpp>

class GameLogic
{
public:
    GameLogic(sf::RenderWindow& p_window, sf::Sprite& p_background, sf::Sprite& p_ship, sf::Sprite& p_bullet);
    void shipControl(sf::Event &p_event);
    void bullet();
private:
    sf::RenderWindow& m_window;
    sf::Sprite& m_background;
    sf::Sprite& m_ship;
    sf::Sprite& m_bullet;
    const int m_step = 20;
    sf::Event m_event;
};

#endif // GAMELOGIC_H
