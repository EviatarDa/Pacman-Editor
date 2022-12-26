#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

enum texture { WALL = 0, DOOR, DEAMON, PACMAN, COOKIE, PRESENT, KEY, ERASE, RESET, SAVE};

class Board
{
public:

    void SetSize();
    const int GetRow();
    const int GetCol();
    void SetRow(const int);
    void SetCol(const int);
    void init();
    void InitTextures();
    const sf::RectangleShape CreateRectangle(const int, const int) const ;
    const sf::RectangleShape GetRec(const int, const int) const;
    void SetRec(const int, const int, const enum texture);
    void reset();
    const sf::RectangleShape DrawReflection(const int, const int, const int);



private:
    std::vector<std::vector<sf::RectangleShape>> m_RectangleMatrix;
    int m_row, m_col;
    sf::Texture m_textures[10];

};

