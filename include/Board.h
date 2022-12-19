#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

enum texture { WALL = 0, DOOR, DEAMON, PAMAN, COOCKIE, PRESENT, KEY, ERASE, CLEAR, SAVE };

class Board
{
public:
  //  Board();
    void Display();
    void SetSize();
    int GetRow();
    int GetCol();
    void init();
    void InitTextures();
    sf::RectangleShape CreateRectangle(int, int);
    sf::RectangleShape GetRec(int,int);
    void SetRec(int, int, enum texture);

private:
    std::vector<std::vector<sf::RectangleShape>> m_RectangleMatrix;
    int m_row, m_col;
    sf::Texture m_textures[10];

};

