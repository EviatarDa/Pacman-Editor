#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Board.h"
#include "ToolBar.h"
#include "GameObjects.h"

class Controller
{
public:
    Controller();
    void run();
    void init();
    void DrawBoard();
    void DrawToolBar();
    void handleClick(const sf::Vector2f &location, char&);





private:

    //members
    sf::RenderWindow m_window;
    std::vector< std::vector <char> > m_matrix;
    Board m_board;
    ToolBar m_ToolBar;

    //functions

    void Draw();
    void InitMatrix();
};
