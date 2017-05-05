#include "gamelogic.h"

GameLogic::GameLogic(sf::RenderWindow &p_window, sf::Sprite &p_background, sf::Sprite &p_ship, sf::Sprite& p_bullet):m_window(p_window),
                                                                                               m_background(p_background),
                                                                                               m_ship(p_ship),
                                                                                               m_bullet(p_bullet)
{

}

void GameLogic::shipControl(sf::Event& p_event)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) &&
            m_ship.getPosition().x<=(m_window.getSize().x-m_ship.getLocalBounds().width-m_step))
    {
        m_ship.move(m_step,0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && m_ship.getPosition().x>0)
    {
        m_ship.move(-m_step,0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && m_ship.getPosition().y>0)
    {
        m_ship.move(0,-m_step);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) &&
            m_ship.getPosition().y<=(m_window.getSize().y-m_ship.getLocalBounds().height-m_step))
    {
        m_ship.move(0,m_step);
    }
    if(p_event.type == sf::Event::KeyPressed)
    {
        m_bullet.setPosition(m_ship.getPosition().x+(m_ship.getGlobalBounds().width-m_bullet.getGlobalBounds().width)/2,
                             m_ship.getPosition().y);
        if(p_event.key.code == sf::Keyboard::Space)
        {
            bullet();
        }
    }
}

void GameLogic::bullet()
{
    if(m_bullet.getPosition().y>0)
       m_bullet.move(0,10);



    std::cout<<m_bullet.getPosition().x<<"  "<< m_ship.getPosition().x<<std::endl
             <<m_bullet.getPosition().y<<"  "<< m_ship.getPosition().y<<std::endl<<std::endl;
}
