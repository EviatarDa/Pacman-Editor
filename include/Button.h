#pragma once

#include <SFML/Graphics.hpp>


//-----------abstruct Button class-----------------

class Button
{
public:
	virtual void init() = 0;
	virtual const sf::RectangleShape GetRec()const = 0;
	virtual const char GetChar()const = 0;

private:

};


//---------------Wall button-----------------

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

//---------------Door button-----------------

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

//---------------Deamon button-----------------

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

//---------------Pacman button-----------------

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

//---------------Cookie button-----------------

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

//---------------Present button-----------------

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

//---------------Key button-----------------

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

//---------------Eraze button-----------------

class Erase : public Button
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

//---------------Reset button-----------------

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

//---------------Save button-----------------

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

