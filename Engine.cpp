#include "Engine.h"
#include<iostream>
Engine::Engine(Player p) : m_player(p) {
	m_Window.create(sf::VideoMode(1280.0f, 720.0f), "GameEngie", sf::Style::Close);
}

void Engine::start() {
	sf::Clock clock;
	float currFrame = 0;
	while (m_Window.isOpen())
	{
		sf::Event e;
		
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;
		float speed = 10;

		while (m_Window.pollEvent(e)) {
			switch (e.type)
			{
			case sf::Event::Closed:
				m_Window.close();
				break;
			default:
				break;
			}
		}
		

		if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A)))) {
			m_player.dir = 1; m_player.speed = 0.1;
			currFrame += 0.005 * time;
			if (currFrame > 3) currFrame -= 3;
			m_player.sprite.setTextureRect(sf::IntRect(96 * int(currFrame), 96, 96, 96));

		}

		if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || (sf::Keyboard::isKeyPressed(sf::Keyboard::D)))) {
			m_player.dir = 0; m_player.speed = 0.1;
			currFrame += 0.005 * time;
			if (currFrame > 3) currFrame -= 3;
			m_player.sprite.setTextureRect(sf::IntRect(96 * int(currFrame), 192, 96, 96));
		}

		if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || (sf::Keyboard::isKeyPressed(sf::Keyboard::W)))) {
			m_player.dir = 3; m_player.speed = 0.1;
			currFrame += 0.005 * time;
			if (currFrame > 3) currFrame -= 3;
			m_player.sprite.setTextureRect(sf::IntRect(96 * int(currFrame), 288, 96, 96));
		}

		if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || (sf::Keyboard::isKeyPressed(sf::Keyboard::S)))) {
			m_player.dir = 2; m_player.speed = 0.1;
			currFrame += 0.005 * time;
			if (currFrame > 3) currFrame -= 3;
			m_player.sprite.setTextureRect(sf::IntRect(96 * int(currFrame), 0, 96, 96));
		}

		m_player.update(time);

		m_Window.clear();
		m_Window.draw(m_player.sprite);
		m_Window.display();
	}
	
}