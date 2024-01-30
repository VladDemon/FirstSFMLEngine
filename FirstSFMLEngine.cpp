#include<iostream>
#include "Engine.h"
#include "Player.h"

int main() {
	
	Player player("hero.png", 350, 350, 96.0, 96.0);

	Engine e(player);
	e.start();

	return 0;
}