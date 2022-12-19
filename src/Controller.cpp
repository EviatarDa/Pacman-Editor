#include "Controller.h"


Controller::Controller()
	:m_window(sf::VideoMode(1200,900), "Pacman Editor")
{
}



void Controller::run()
{
    init();
    while (m_window.isOpen())
    {
            m_window.clear();
            Draw();
            m_window.display();

            if (auto event = sf::Event{}; m_window.waitEvent(event))
            {
                switch (event.type)
                {
                case sf::Event::Closed:
                    m_window.close();
                    break;
                case sf::Event::MouseButtonReleased:
                   // handleClick(event.mouseButton);
                    break;
                }
            }
    }

}

void Controller::init()
{
    m_board.SetSize();
    m_board.init();
    m_window.setSize(sf::Vector2u(1200,900));
    m_ToolBar.SetSize(200, 900);
    m_ToolBar.init();
    //m_matrix להוסיף
}

void Controller::DrawBoard()
{
    for (int row = 0 ;row < m_board.GetRow() ; ++row )
    {
        for (int col = 0; col < m_board.GetCol(); ++col)
        {
            m_window.draw(m_board.GetRec(row,col));
        }
    }
}

void Controller::DrawToolBar()
{
    m_window.draw(m_ToolBar.getToolBar());
}

void Controller::Draw()
{
    DrawBoard();
    DrawToolBar();
}
