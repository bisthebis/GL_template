#include <iostream>
#include <SFML/Window.hpp>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GL/gl.h>

int main()
{
	sf::ContextSettings settings;
	settings.depthBits = 24;
	settings.stencilBits = 8;
	settings.antialiasingLevel = 4;
	settings.majorVersion = 4;
	settings.minorVersion = 5;


	sf::Window window(sf::VideoMode(200, 200), "OpenGL works!", sf::Style::Default, settings);

	while (window.isOpen())
	{
		sf::Event event;
        	while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || event.type == sf::Event::KeyPressed)
			window.close();
		}

	glClearColor(0, 0.5, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);	

	window.display();
	}

	return 0;
}
