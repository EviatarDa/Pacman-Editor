#pragma once

#include "Button.h"

void Button::init()
{	
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_picture.loadFromFile("digger.png");
	m_rec.setTexture(&m_picture);
	m_rec.setPosition(sf::Vector2f(1000,10));
	m_type = '#';
}

sf::RectangleShape Button::GetRec()
{
	return m_rec;
}

char Button::GetChar()
{
	return m_type;
}
