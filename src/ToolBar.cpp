#include "ToolBar.h"
#include <iostream>

void ToolBar::SetSize(int row, int col)
{
	m_col = col;
	m_row = row;
}

void ToolBar::init()
{
	//toolbar position
	m_outline.setSize(sf::Vector2(m_row, m_col));
	m_outline.setPosition(1000, 0);

	//Style
	m_outline.setOutlineColor(sf::Color::Color(102, 102, 102));
	m_outline.setOutlineThickness(4.f);
	m_outline.setFillColor(sf::Color::Color(255, 255, 204));

	//init button:
	for (int button = 0; button < 10; ++button)
	{
		m_botton[button]->init();
	}
}

const sf::RectangleShape ToolBar::getToolBar()
{
	//returns toolbar rectangle
	return m_outline;
}

const sf::RectangleShape ToolBar::getButton(const int button)
{
	//returns button rectangle
	return m_botton[button]->GetRec();
}

const char ToolBar::GetButtonChar(const int button)
{
	//returns the type
	return m_botton[button]->GetChar();
}
