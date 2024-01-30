#pragma once
#include<SFML/Graphics.hpp>
#include "Player.h"

class Engine {
public:
	sf::RenderWindow m_Window;
	


	Player m_player;

	void input();
	void update();
	void draw();

public:
	Engine(Player p);

	void start();
};