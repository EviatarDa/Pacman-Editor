#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Board.h"
#include "ToolBar.h"
#include "GameObjects.h"
#include <fstream>

class Controller
{
public:
    Controller();
    void run();
    void init();
    void DrawBoard();
    void DrawToolBar();
    void handleClick(const sf::Vector2f &location, char&, bool&);
    void reset();
    void InitWithGivenMatrix();
    void CreateFile();

private:

    //members
    sf::RenderWindow m_window;
    std::vector< std::vector <char> > m_matrix;
    Board m_board;
    ToolBar m_ToolBar;
    sf::Texture m_background;
    std::ifstream m_ifile = std::ifstream("Board.txt");
    std::ofstream m_ofile;


    //functions

    void Draw();
    void InitMatrix();
};
