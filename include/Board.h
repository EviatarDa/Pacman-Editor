#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>


class Board
{
public:
  //  Board();
    void Display();
    void SetSize();
    int GetRow();
    int GetCol();
    void init();
    sf::RectangleShape CreateRectangle(int, int);
    sf::RectangleShape GetRec(int,int);

private:
    std::vector<std::vector<sf::RectangleShape>> m_RectangleMatrix;
    int m_row, m_col;
};

