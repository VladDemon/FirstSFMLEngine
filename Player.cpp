#include "Player.h"

Player::Player(sf::String f, float _x, float _y, float _w, float _h) : File(f), x(_x), y(_y), w(_w), h(_h) {
	image.loadFromFile("C:\\Programs\\C++\\SFMLprod\\image\\" + File);
	image.createMaskFromColor(sf::Color(41, 33, 59));
	texture.loadFromImage(image);
	texture.setSmooth(true);
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(w, h, w, h));
}

void Player::update(float time) {
	switch (dir)
	{
	case 0:
		dx = speed; dy = 0; break;
	case 1:
		dx = -speed; dy = 0; break;
	case 2:
		dx = 0; dy = speed; break;
	case 3:
		dx = 0; dy = -speed; break;
	default:
		break;
	}
	x += dx * time;
	y += dy * time;

	speed = 0;
	sprite.setPosition(x, y);
}