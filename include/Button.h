#pragma once

#include <SFML/Graphics.hpp>

class Button
{
public:
	void init();
	sf::RectangleShape GetRec();
	char GetChar();

private:
	sf::RectangleShape m_rec;
	char m_type;
	sf::Texture m_picture;
};
