#pragma once

#include "Button.h"


//---------------Wall button-----------------

void Wall::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("wall.jpg");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 10));
}

const sf::RectangleShape Wall::GetRec()const
{
	return m_rec;
}

const char Wall::GetChar()const
{
	return m_type;
}

//---------------Door button-----------------

void Door::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("door.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 90));
}

const sf::RectangleShape Door::GetRec()const
{
	return m_rec;
}

const char Door::GetChar()const
{
	return m_type;
}

//---------------Deamon button-----------------

void Deamon::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("deamon.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 170));
}

const sf::RectangleShape Deamon::GetRec()const
{
	return m_rec;
}

const char Deamon::GetChar()const
{
	return m_type;
}

//---------------Pacman button-----------------

void Pacman::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("pacman.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 250));
}

const sf::RectangleShape Pacman::GetRec()const
{
	return m_rec;
}

const char Pacman::GetChar()const
{
	return m_type;
}


//---------------Cookie button-----------------

void Cookie::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("cookie.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 330));
}

const sf::RectangleShape Cookie::GetRec()const
{
	return m_rec;
}

const char Cookie::GetChar()const
{
	return m_type;
}

//---------------Present button-----------------

void Present::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("present.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 410));
}

const sf::RectangleShape Present::GetRec()const
{
	return m_rec;
}

const char Present::GetChar()const
{
	return m_type;
}


//---------------Key button-----------------

void Key::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("key.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 490));
}

const sf::RectangleShape Key::GetRec()const
{
	return m_rec;
}

const char Key::GetChar()const
{
	return m_type;
}

//---------------Eraze button-----------------

void Erase::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("erase.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 570));
}

const sf::RectangleShape Erase::GetRec()const
{
	return m_rec;
}

const char Erase::GetChar()const
{
	return m_type;
}


//---------------Reset button-----------------

void Reset::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("reset.png");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 650));
}

const sf::RectangleShape Reset::GetRec()const
{
	return m_rec;
}

const char Reset::GetChar()const
{
	return m_type;
}

//---------------Save button-----------------

void Save::init()
{
	m_rec.setSize(sf::Vector2f(70.f, 70.f));
	m_texture.loadFromFile("save.jpg");
	m_rec.setTexture(&m_texture);
	m_rec.setPosition(sf::Vector2f(1065, 730));
}

const sf::RectangleShape Save::GetRec()const
{
	return m_rec;
}

const char Save::GetChar()const
{
	return m_type;
}
