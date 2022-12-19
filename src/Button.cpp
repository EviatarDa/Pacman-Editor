#pragma once

#include "Button.h"


//button::wall functions

void Wall::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("wall.jpg");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 10));
}

sf::RectangleShape Wall::GetRec()
{
	return m_rec;
}

char Wall::GetChar()
{
	return m_type;
}

void Door::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("door.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 70));
}

sf::RectangleShape Door::GetRec()
{
	return m_rec;
}

char Door::GetChar()
{
	return m_type;
}


//-------


void Deamon::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("deamon.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 130));
}

sf::RectangleShape Deamon::GetRec()
{
	return m_rec;
}

char Deamon::GetChar()
{
	return m_type;
}

//-----

void Pacman::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("pacman.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 190));
}

sf::RectangleShape Pacman::GetRec()
{
	return m_rec;
}

char Pacman::GetChar()
{
	return m_type;
}


//-----------

void Cookie::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("cookie.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 250));
}

sf::RectangleShape Cookie::GetRec()
{
	return m_rec;
}

char Cookie::GetChar()
{
	return m_type;
}

//--------------


void Present::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("present.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 310));
}

sf::RectangleShape Present::GetRec()
{
	return m_rec;
}

char Present::GetChar()
{
	return m_type;
}


//-------

void Key::init()
{
	m_rec.setSize(sf::Vector2f(50.f, 50.f));
	m_texture.loadFromFile("key.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1000, 370));
}

sf::RectangleShape Key::GetRec()
{
	return m_rec;
}

char Key::GetChar()
{
	return m_type;
}



