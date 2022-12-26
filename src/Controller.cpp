#include "Controller.h"


Controller::Controller()
	:m_window(sf::VideoMode(1200,900), "Pacman Editor")
{
    m_background.loadFromFile("background.png");
    m_background.setSmooth(true);
    sf::Sprite s1(m_background);
    s1.scale(sf::Vector2f(1.75f, 1.75f));
    m_window.clear(sf::Color::Color(255, 255, 230));// sf::Color::Color(204, 204, 255));
    m_window.draw(s1);
    m_window.display();
}



void Controller::run()
{
    //TODO change place?
    sf::Sprite s1(m_background);
    s1.scale(sf::Vector2f(1.75f, 1.75f));

    init();
    bool pressed = false;
    char type = 0;
    bool reflection = false;
    int row = 0, col = 0;


    while (m_window.isOpen())
    {
        m_window.clear(sf::Color::Color(255, 255, 230));// sf::Color::Color(204, 204, 255));
        m_window.draw(s1);
        Draw(reflection, row, col, type);
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
                handleClick(location, type, pressed);
                break;
            }   

            case sf::Event::MouseMoved:
            {
                
                if (pressed)
                {
                    handlereflction(reflection, row, col);
                }
                break;
            }

            }
        }
    }

}

void Controller::init()
{
    if (!m_ifile.fail())
    {
        int col, row;
        m_ifile >> row >> col;
        m_board.SetRow(row);
        m_board.SetCol(col);
        InitWithGivenMatrix();
    }
    else
    {
        m_board.SetSize();
        InitMatrix();
    }
    m_board.init();
    m_window.setSize(sf::Vector2u(1200, 900));
    m_ToolBar.SetSize(200, 900);
    m_ToolBar.init();
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
                    //
                    sf::RectangleShape rec = m_board.CreateRectangle(row, col);
                    rec.setFillColor(sf::Color::Color(255, 255, 230));
                    m_window.draw(rec);
                    //
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }
                case '&':
                {
                    m_board.SetRec(row, col, DEAMON);
                    //
                    sf::RectangleShape rec = m_board.CreateRectangle(row, col);
                    rec.setFillColor(sf::Color::Color(255, 255, 230));
                    m_window.draw(rec);
                    //
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }
                case 'a':
                {
                    m_board.SetRec(row, col, PACMAN);
                    //
                    sf::RectangleShape rec = m_board.CreateRectangle(row, col);
                    rec.setFillColor(sf::Color::Color(255, 255, 230));
                    m_window.draw(rec);
                    //
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }
                case '*':
                {
                    m_board.SetRec(row, col, COOKIE);
                    //
                    sf::RectangleShape rec = m_board.CreateRectangle(row, col);
                    rec.setFillColor(sf::Color::Color(255, 255, 230));
                    m_window.draw(rec);
                    ///
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }
                case '$':
                {
                    m_board.SetRec(row, col, PRESENT);
                    //
                    sf::RectangleShape rec = m_board.CreateRectangle(row, col);
                    rec.setFillColor(sf::Color::Color(255, 255, 230));
                    m_window.draw(rec);
                    //
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }
                case '%':
                {
                    m_board.SetRec(row, col, KEY);
                    //
                    sf::RectangleShape rec = m_board.CreateRectangle(row, col);
                    rec.setFillColor(sf::Color::Color(255, 255, 230));
                    m_window.draw(rec);
                    //
                    m_window.draw(m_board.GetRec(row, col));
                    break;
                }

                case ' ':
                    m_board.SetRec(row, col, ERASE);
                    m_window.draw(m_board.GetRec(row, col));
                    break;

                default:
                    sf::RectangleShape rec = m_board.CreateRectangle(row, col);
                    rec.setFillColor(sf::Color::Color(255, 255, 230));
                    m_window.draw(rec);
                    m_window.draw(m_board.GetRec(row, col));
                    break;
            }
        }
    }
}

void Controller::DrawToolBar()
{
    m_window.draw(m_ToolBar.getToolBar());
    for (int button = 0; button < 10; ++button)
    { 
        m_window.draw(m_ToolBar.getButton(button));
    }
}

void Controller::handleClick(const sf::Vector2f& location, char& type, bool &pressed)
{
    if (m_ToolBar.getButton(RESET).getGlobalBounds().contains(location))
    {
        reset();
        return;
    }
    else if (m_ToolBar.getButton(SAVE).getGlobalBounds().contains(location))
    {
        CreateFile();
        return;
    }
    else if (m_ToolBar.getToolBar().getGlobalBounds().contains(location))
    {
        for (int button = 0; button < 8; ++button)
        {
            if (m_ToolBar.getButton(button).getGlobalBounds().contains(location))
            {
                type = m_ToolBar.GetButtonChar(button);
                pressed = true;
                return;
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
                  //  std::cout << m_matrix[row][col] << " row:" << row << " col:" << col << std::endl;
                    return;
                }
            }
        }
    }
}

void Controller::reset()
{
    for (int row = 0; row < m_board.GetRow(); ++row)
    {
        m_matrix[row].clear();
    }
    m_matrix.clear();
    m_board.reset();
    InitMatrix();
}

void Controller::InitWithGivenMatrix()
{
    m_ifile.get(); // for \n
    //char c;
    for (int row = 0; row < m_board.GetRow(); ++row)
    {
        std::string row_string;
        std::getline(m_ifile, row_string);
        std::vector <char> row_vector;
        for (int col = 0; col < m_board.GetCol(); ++col)
        {
            row_vector.push_back(row_string[col]);
        }
        m_matrix.push_back(row_vector);
    }
}

void Controller::CreateFile()
{
    m_ofile.open("Board.txt");
    m_ofile << m_board.GetRow() << " " << m_board.GetCol() << '\n';
    for (int row = 0; row < m_board.GetRow(); ++row)
    {
        for (int col = 0; col < m_board.GetCol(); ++col)
        {
            m_ofile << m_matrix[row][col];
        }
        m_ofile << '\n';
    }
}

const int Controller::ConvertT2Enum(const char type) const
{
    switch (type)
    {
    case '#':
    {
        return 0;
        break;
    }
    case 'D':
    {
        return 1;
        break;
    }
    case '&':
    {
        return 2;
        break;
    }
    case 'a':
    {
        return 3;
        break;
    }
    case '*':
    {
        return 4;
        break;
    }
    case '$':
    {
        return 5;
        break;
    }
    case '%':
    {
        return 6;
        break;
    }
    }
}

void Controller::handlereflction(bool &reflection, int &row, int &col)
{
    sf::Vector2f location = (sf::Vector2f)sf::Mouse::getPosition(m_window);
    for (row = 0; row < m_board.GetRow(); ++row)
    {
        for (col = 0; col < m_board.GetCol(); ++col)
        {
            if (m_board.GetRec(row, col).getGlobalBounds().contains(location))
            {
                reflection = true;
                return;
            }
        }
    }
}

void Controller::DrawMouse(const int row, const int col, const char type)
{
    int Etype = ConvertT2Enum(type);
    m_window.draw(m_board.DrawReflection(row, col, Etype));
}


void Controller::Draw(bool &reflection, const int row, const int col, const char type)
{
    DrawBoard();
    DrawToolBar();
    if (reflection)
    {
       DrawMouse(row, col, type);
       reflection = false;
    }
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
