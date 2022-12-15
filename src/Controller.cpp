#include "Controller.h"


Controller::Controller()
	:m_window(sf::VideoMode(900,800), "Pacman Editor")
{
}



void Controller::run()
{
    init();
    while (m_window.isOpen())
    {
            m_window.clear();
            DrawBoard();
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
    m_window.setSize(sf::Vector2u(m_board.GetRow() * 10 + 100, m_board.GetCol() * 10));
    m_ToolBar.SetSize(m_board.GetRow() * 10, 100);

    //for (int row = 0; row < m_board.GetRow(); ++row)
    //{
    //    for (int col = 0; col < m_board.GetCol(); ++col)
    //    {
    //        m_matrix[row].push_back(NULL);
    //    }
    //}
}

void Controller::DrawBoard()
{
    for (int row = 0 ;row < m_board.GetRow() ; ++row )
    {
        for (int col = 0; col < m_board.GetCol(); ++col)
        {
            m_window.draw(m_board.GetRec(col,row));
        }
    }
}
