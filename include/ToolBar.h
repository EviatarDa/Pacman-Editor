#pragma once

#include <SFML/Graphics.hpp>
#include "Button.h"



class ToolBar
{
public:
    void SetSize(int, int);
    void init();
    sf::RectangleShape getToolBar();
    sf::RectangleShape getButton();
    char GetButtonChar();



private:
    float m_col, m_row;
    sf::RectangleShape m_outline;
    Wall m_wall;

    Button* m_botton[1] = { &m_wall };
};
