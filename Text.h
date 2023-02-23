#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

struct TextObj {
	sf::Font font;
	sf::Text text;
};

void textInit(TextObj& textobj, std::string str, sf::Vector2f pos) {
	textobj.font.loadFromFile("arial.ttf");
	textobj.text.setString(str);
	textobj.text.setFont(textobj.font);
	textobj.text.setCharacterSize(CHAR_SIZE);
	textobj.text.setPosition(pos);

}

void textUpdate(TextObj& textobj, std::string str) {
	textobj.text.setString(str);
}

void textDraw(sf::RenderWindow& window, const TextObj& textobj) {
	window.draw(textobj.text);
}
