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
	m_botton[0]->init();
}

sf::RectangleShape ToolBar::getToolBar()
{
	return m_outline;
}

sf::RectangleShape ToolBar::getButton()
{
	return m_botton[0]->GetRec();
}

char ToolBar::GetButtonChar()
{
	return m_botton[0]->GetChar();
}
