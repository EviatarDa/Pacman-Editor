#pragma once

#include "Board.h"


Board::~Board()
{
	m_RectangleMatrix.clear();
}

void Board::SetSize()
{
	//max m_col = 18;
	//max m_row = 20;
	std::cout << "please enter col and row: ";
	std::cin >> m_col >> m_row;
	while (m_col > 18 || m_row > 20)
	{
		std::cout << "the maximum c/r size is 18/20 please enter again col and row: ";
		std::cin >> m_col >> m_row;
	}
}

int Board::GetRow()
{
	return m_row;
}

int Board::GetCol()
{
	return m_col;
}

void Board::SetRow(int row)
{
	m_row = row;
}

void Board::SetCol(int col)
{
	m_col = col;
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
	m_textures[DOOR].loadFromFile("door.png");
	m_textures[DEAMON].loadFromFile("deamon.png");
	//m_textures[DEAMON].setSmooth(true);
	m_textures[PACMAN].loadFromFile("pacman.png");
	m_textures[COOKIE].loadFromFile("cookie.png");
	m_textures[PRESENT].loadFromFile("present.png");
	m_textures[KEY].loadFromFile("key.png");
	//m_textures[ERASE].loadFromFile("erase.png");
	//m_textures[RESET].loadFromFile("reset.png");
	//m_textures[SAVE].loadFromFile("save.jpg");
}

sf::RectangleShape Board::CreateRectangle(int row, int col)
{
	sf::RectangleShape rec;

	//Position
	rec.setSize(sf::Vector2(50.f, 50.f));
	rec.setPosition((float)((1000 - m_row * 50.f) / 2 + (row * 50.f)),
					(float)((900 - m_col * 50.f) / 2 + (col * 50.f)));

	//Style
	rec.setOutlineColor(sf::Color::Color(102, 102, 102));
	rec.setOutlineThickness(1.f);
	rec.setFillColor(sf::Color::Transparent);//Color(140, 177, 217));

	return rec;
}

sf::RectangleShape Board::GetRec(int row, int col)
{
	return m_RectangleMatrix[row][col];
}

void Board::reset()
{
	for (int row = 0; row < m_row; ++row)
	{
		m_RectangleMatrix[row].clear();
	}
	m_RectangleMatrix.clear();
	SetSize();
	init();
}

void Board::SetRec(int row, int col, enum texture type)
{
	m_RectangleMatrix[row][col].setFillColor(sf::Color::White);
	m_RectangleMatrix[row][col].setTexture(&m_textures[type], true);
	
}

