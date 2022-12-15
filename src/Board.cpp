#pragma once

#include "Board.h"

sf::Vector2f size(10, 10);

//Board::Board()
//{
//
//}

void Board::Display()
{
	for (int row = 0; row < m_row; ++row)
	{
		for (int col = 0; col < m_col; ++col)
		{

		}
	}
}

void Board::SetSize()
{
	std::cout << "please enter col and row: ";
	std::cin >> m_col >> m_row;
}

int Board::GetRow()
{
	return m_row;
}

int Board::GetCol()
{
	return m_col;
}

void Board::init()
{
	m_RectangleMatrix.resize(m_row);
	for (int col = 0; col < m_row; ++col)
	{
		m_RectangleMatrix[col].resize(m_row);
	}
}

sf::RectangleShape Board::GetRec(int row, int col)
{
	return m_RectangleMatrix[row][col];
}

