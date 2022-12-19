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
	m_col = 10;
	m_row = 10;
	//std::cout << "please enter col and row: ";
	//std::cin >> m_col >> m_row;
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
	for (int row = 0; row < m_row; ++row)
	{
		std::vector < sf::RectangleShape > vector_row;
		for (int col = 0; col < m_col; ++col)
		{
			vector_row.push_back(CreateRectangle(row,col));
		}
		m_RectangleMatrix.push_back(vector_row);
	}
	InitTextures();
}

void Board::InitTextures()
{
	m_textures[WALL].loadFromFile("wall.jpg");

}

sf::RectangleShape Board::CreateRectangle(int row, int col)
{
	sf::RectangleShape rec;

	//Position
	rec.setSize(sf::Vector2(50.f, 50.f));
	rec.setPosition((float)(row * 50.f), (float)(col * 50.f));

	//Style
	rec.setOutlineColor(sf::Color::Blue);
	rec.setOutlineThickness(2.f);
	rec.setFillColor(sf::Color::White);

	return rec;
}

sf::RectangleShape Board::GetRec(int row, int col)
{
	return m_RectangleMatrix[row][col];
}

void Board::SetRec(int row, int col, enum texture type)
{
	m_RectangleMatrix[row][col].setTexture(&m_textures[type]);
}

