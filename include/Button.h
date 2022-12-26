#pragma once

#include <SFML/Graphics.hpp>


class Button
{
public:
	virtual void init() = 0;
	virtual const sf::RectangleShape GetRec()const = 0;
	virtual const char GetChar()const = 0;

private:

};



class Wall: public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = '#';
	sf::Texture m_texture;
};


class Door : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = 'D';
	sf::Texture m_texture;
};


class Deamon : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = '&';
	sf::Texture m_texture;
};


class Pacman : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = 'a';
	sf::Texture m_texture;
};



class Cookie : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = '*';
	sf::Texture m_texture;
};

//----

class Present : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = '$';
	sf::Texture m_texture;
};

//----
class Key : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = '%';
	sf::Texture m_texture;
};

//------

class erase : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = ' ';
	sf::Texture m_texture;
};


//------

class Reset : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = ' ';
	sf::Texture m_texture;
};


//------

class Save : public Button
{
public:
	void init();
	const sf::RectangleShape GetRec()const;
	const char GetChar()const;

private:
	sf::RectangleShape m_rec;
	char m_type = ' ';
	sf::Texture m_texture;
};

