#pragma once

#include<SFML/Graphics.hpp>

class Player {

public:
	float x, y, w, h, dx, dy, speed = 0;
	int dir = 0;
	sf::String File;
	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;

	Player(sf::String f, float _x, float _y, float _w, float _h);

	void update(float time);
};