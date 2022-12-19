#pragma once

#include <SFML/Graphics.hpp>
#include "Button.h"

//enum texture { WALL = 0, DOOR, DEAMON, PACMAN, COOKIE, PRESENT, KEY, ERASE, RESET, SAVE };


class ToolBar
{
public:
    void SetSize(int, int);
    void init();
    sf::RectangleShape getToolBar();
    sf::RectangleShape getButton(int);
    char GetButtonChar(int);




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

   
    Button* m_botton[7] = { &m_wall, &m_door, &m_deamon, &m_pacman,&m_cookie,&m_present, &m_key };
};
