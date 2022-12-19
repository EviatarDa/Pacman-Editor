#pragma once

#include "Button.h"


/*
sf::RectangleShape Button::GetRec()
{
	//return m_rec;
}

char Button::GetChar()
{
	//return m_type;
}
*/

//button::wall functions

void Wall::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("wall.jpg");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 10));
	m_type = '#';
}

sf::RectangleShape Wall::GetRec()
{
	return m_rec;
}

char Wall::GetChar()
{
	return m_type;
}



