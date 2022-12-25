#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

enum texture { WALL = 0, DOOR, DEAMON, PACMAN, COOKIE, PRESENT, KEY, ERASE, RESET, SAVE};

class Board
{
public:
    ~Board();
    void SetSize();
    int GetRow();
    int GetCol();
    void SetRow(int);
    void SetCol(int);
    void init();
    void InitTextures();
    sf::RectangleShape CreateRectangle(int, int);
    sf::RectangleShape GetRec(int,int);
    void SetRec(int, int, enum texture);
    void reset();



private:
    std::vector<std::vector<sf::RectangleShape>> m_RectangleMatrix;
    int m_row, m_col;
    sf::Texture m_textures[10];

};

