#pragma once

#include <SFML/Graphics.hpp>
#include "Button.h"


class ToolBar
{
public:
    void SetSize(int, int);
    void init();
    const sf::RectangleShape getToolBar();
    const sf::RectangleShape getButton(const int);
    const char GetButtonChar(const int);




private:
    float m_col, m_row;
    sf::RectangleShape m_outline;
    Wall m_wall;
    Door m_door;
    Deamon m_deamon;
    Pacman m_pacman;
    Cookie m_cookie;
    Present m_present;
    Key m_key;
    Erase m_erase;
    Reset m_reset;
    Save m_save;
    
    //buttons array
    Button* m_botton[10] = { &m_wall, &m_door, &m_deamon, &m_pacman,&m_cookie,
                            &m_present, &m_key, &m_erase, &m_reset, &m_save };

};
