#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <SFML/Graphics.hpp>

class GameLogic
{
public:
    void InitialPosition(float widtShip, float heightShip, const int windowWidth, const int windowHeight);
    void changePosition(float widtShip, float heightShip, const int windowWidth, const int p_windowHeight);
    void getPosition(float x, float y);
    void shipControl(sf::Event p_event, const int widthShip, const int heightShip, const int p_windowWidth, const int p_windowHeight);
    sf::Vector2u shipPosition;

};

#endif // GAMELOGIC_H
