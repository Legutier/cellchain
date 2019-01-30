#include<iostream>
#include <SFML/Graphics.hpp>
#include"node.h"
#include"map.h"
using namespace std;

int main() {

	sf::RenderWindow window(sf::VideoMode(1024, 720), "Cellchain");
	const int level[] =
	{
		0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3,
		0, 1, 0, 0, 2, 0, 3, 3, 3, 0, 1, 1, 1, 0, 0, 0,
		0, 1, 1, 0, 3, 3, 3, 0, 0, 0, 1, 1, 1, 2, 0, 0,
		0, 0, 1, 0, 3, 0, 2, 2, 0, 0, 1, 1, 1, 1, 2, 0,
		2, 0, 1, 0, 3, 0, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1,
		0, 0, 1, 0, 3, 2, 2, 2, 0, 0, 0, 0, 1, 1, 1, 1,
	};
	Grid map;
	if (!map.load("tileset.png", sf::Vector2u(64, 64), level, 16, 8))
			return -1;

	int x, y, a, b = 0;
	bool act = true;
	char c;
	while (window.isOpen()) {
			// handle events
			sf::Event event;
			while (window.pollEvent(event))
			{
					if(event.type == sf::Event::Closed)
							window.close();
			}

			// draw the map
			window.clear();
			window.draw(map);
			window.display();
	}

	return 0;
}
