#pragma once

#include <SFML/Graphics.hpp>


class Button
{
public:
	virtual void init() = 0;
	virtual sf::RectangleShape GetRec() = 0;
	virtual char GetChar() = 0;

private:

};



class Wall: public Button
{
public:
	void init();
	sf::RectangleShape GetRec();
	char GetChar();

private:
	sf::RectangleShape m_rec;
	char m_type = '#';
	sf::Texture m_texture;
};