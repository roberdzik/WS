#include "gamelogic.h"


void GameLogic::InitialPosition(float widtShip, float heightShip, const int windowWidth, const int windowHeight)
{
    shipPosition.x=(windowWidth-widtShip)/2;
    shipPosition.y=windowHeight-heightShip;
}

void GameLogic::shipControl(sf::Event p_event, sf::RenderWindow &p_window, sf::Texture p_texture, sf::Sprite p_ship)
 {
    const int step=20;

    if(p_event.type == sf::Event::KeyPressed)
    {
        if(p_event.key.code == sf::Keyboard::Up && p_ship.getPosition().y>0)
        {
           return p_ship.setPosition(p_ship.getPosition().x, p_ship.getPosition().y-step);
        }
        if(p_event.key.code == sf::Keyboard::Down && p_ship.getPosition().y<=(p_window.getSize().y-p_texture.getSize().y-step))
        {
            return p_ship.setPosition(p_ship.getPosition().x, p_ship.getPosition().y+step);
        }
        if(p_event.key.code == sf::Keyboard::Left && p_ship.getPosition().x>0)
        {
            return p_ship.setPosition(p_ship.getPosition().x-step, p_ship.getPosition().y);
        }
        if(p_event.key.code == sf::Keyboard::Right && p_ship.getPosition().y<=(p_window.getSize().x-p_texture.getSize().x-step))
        {
            return p_ship.setPosition(p_ship.getPosition().x+step, p_ship.getPosition().y);
        }

    }
 }

void GameLogic::getPosition(float x, float y)
{
    shipPosition.x = x;
    shipPosition.y = y;
}
