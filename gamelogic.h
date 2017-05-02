#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <SFML/Graphics.hpp>

class GameLogic
{
public:
    void InitialPosition(float widtShip, float heightShip, const int windowWidth, const int windowHeight);
    void changePosition(float widtShip, float heightShip, const int windowWidth, const int p_windowHeight);
    void getPosition(float x, float y);
    void shipControl(sf::Event p_event, sf::RenderWindow& p_window, sf::Texture p_texture, sf::Sprite p_ship);
    sf::Vector2u shipPosition;

};

#endif // GAMELOGIC_H
