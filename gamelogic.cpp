#include "gamelogic.h"


void GameLogic::InitialPosition(float widtShip, float heightShip, const int windowWidth, const int windowHeight)
{
    shipPosition.x=(windowWidth-widtShip)/2;
    shipPosition.y=windowHeight-heightShip;
}

void GameLogic::changePosition(float widtShip, float heightShip, const int p_windowWidth, const int p_windowHeight)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && shipPosition.x<=(p_windowWidth-widtShip-20))
    {
        shipPosition.x=shipPosition.x+20;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && shipPosition.x>0)
    {
        shipPosition.x=shipPosition.x-20;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && shipPosition.y>0)
    {
        shipPosition.y=shipPosition.y-20;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && shipPosition.y<=(p_windowHeight-heightShip-20))
    {
        shipPosition.y=shipPosition.y+20;
    }
}
 void GameLogic::shipControl(sf::Event p_event, const int widthShip, const int heightShip, const int p_windowWidth, const int p_windowHeight)
 {
    const int step=20;

    if(p_event.type == sf::Event::KeyPressed)
    {
        if(p_event.key.code == sf::Keyboard::Up && shipPosition.y>0)
        {
            shipPosition.y=shipPosition.y-step;
        }
        if(p_event.key.code == sf::Keyboard::Down && shipPosition.y<=(p_windowHeight-heightShip-step))
        {
            shipPosition.y=shipPosition.y+step;
        }
        if(p_event.key.code == sf::Keyboard::Left && shipPosition.x>0)
        {
            shipPosition.x=shipPosition.x-step;
        }
        if(p_event.key.code == sf::Keyboard::Right && shipPosition.x<=(p_windowWidth-widthShip-step))
        {
            shipPosition.x=shipPosition.x+step;;
        }
    }
 }

void GameLogic::getPosition(float x, float y)
{
    shipPosition.x = x;
    shipPosition.y = y;
}
