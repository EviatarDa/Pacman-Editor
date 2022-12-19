#include "ToolBar.h"
#include <iostream>

void ToolBar::SetSize(int row, int col)
{
	m_col = col;
	m_row = row;
}

void ToolBar::init()
{
	//position
	m_outline.setSize(sf::Vector2(m_row, m_col));
	m_outline.setPosition(1000, 0);

	//Style
	m_outline.setOutlineColor(sf::Color::Blue);
	m_outline.setOutlineThickness(2.f);
	m_outline.setFillColor(sf::Color::White);

	//init button:
	for (int button = 0; button < 7; ++button)
	{
		m_botton[button]->init();
	}
}

sf::RectangleShape ToolBar::getToolBar()
{
	return m_outline;
}

sf::RectangleShape ToolBar::getButton(int button)
{

	return m_botton[button]->GetRec();
}

char ToolBar::GetButtonChar(int button)
{
	return m_botton[button]->GetChar();
}
