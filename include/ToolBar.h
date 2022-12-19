#pragma once

#include <SFML/Graphics.hpp>


class ToolBar
{
public:
    void SetSize(int, int);
    void init();
    sf::RectangleShape getToolBar();


private:
    float m_col, m_row;
    sf::RectangleShape m_outline;
};
