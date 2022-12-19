#include "Controller.h"


Controller::Controller()
	:m_window(sf::VideoMode(1200,900), "Pacman Editor")
{
}



void Controller::run()
{
    init();
    char type = 0;
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
                {
                    auto location = m_window.mapPixelToCoords(
                        { event.mouseButton.x, event.mouseButton.y });
                    handleClick(location, type);
                    break;
                }
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
    InitMatrix();
}

void Controller::DrawBoard()
{
    for (int row = 0 ;row < m_board.GetRow() ; ++row )
    {
        for (int col = 0; col < m_board.GetCol(); ++col)
        {
            char type = m_matrix[row][col];
            switch (type)
            {
                case '#':
                {
                    m_board.SetRec(row, col, WALL);
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }
                case 'D':
                {
                    m_board.SetRec(row, col, DOOR);
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }
                case ' ':
                    m_window.draw(m_board.GetRec(row, col));
                    break;

                default:
                    m_window.draw(m_board.GetRec(row, col));
                    break;
            }
        }
    }
}

void Controller::DrawToolBar()

{
    m_window.draw(m_ToolBar.getToolBar());
    for (int button = 0; button < 7; ++button)
    { 
        m_window.draw(m_ToolBar.getButton(button));
    }
}

void Controller::handleClick(const sf::Vector2f& location, char& type)
{
    if (m_ToolBar.getToolBar().getGlobalBounds().contains(location))
    {
        for (int button = 0; button < 7; ++button)
        {
            if (m_ToolBar.getButton(button).getGlobalBounds().contains(location))
            {
                type = m_ToolBar.GetButtonChar(button);
            }
        }
    }
    else
    {
        for (int row = 0; row < m_board.GetRow(); ++row)
        {
            for (int col = 0; col < m_board.GetCol(); ++col)
            {
                if (m_board.GetRec(row, col).getGlobalBounds().contains(location))
                {
                    m_matrix[row][col] = type;
                    std::cout << m_matrix[row][col];
                    return;
                }
            }
        }
    }

}


void Controller::Draw()
{
    DrawBoard();
    DrawToolBar();
}

void Controller::InitMatrix()
{
    for (int row = 0; row < m_board.GetRow(); ++row)
    {
        std::vector < char > vector_row;
        for (int col = 0; col < m_board.GetCol(); ++col)
        {
            vector_row.push_back(' ');
        }
        m_matrix.push_back(vector_row);
    }
}
