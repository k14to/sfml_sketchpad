#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "jmal_pad");
    sf::CircleShape shape(8.0f);
    shape.setFillColor(sf::Color::Green);
    shape.setOrigin(6.0f,4.0f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }  

    
    	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    	{
       	   shape.move(-0.7f, 0.f); 
    	}	
    	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
      	    shape.move(0.7f, 0.f);
        }
    	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
 	    shape.move(0.f, -0.7f);
        }
    	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
     	    shape.move(0.f, 0.7f);
    	}	
	

	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		sf::Vector2i globalPosition = sf::Mouse::getPosition(window);
		shape.setPosition((float)globalPosition.x, (float)(globalPosition.y));
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    	{
		window.clear();
    	}
        
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
    	{
	    shape.setFillColor(sf::Color::Red);
    	}	
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
    	{
	    shape.setFillColor(sf::Color::White);
    	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
    	{
	    shape.setFillColor(sf::Color::Blue);
    	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
    	{
	    shape.setFillColor(sf::Color::Yellow);
    	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
    	{
	    shape.setFillColor(sf::Color::Green);
    	}
	
	



        window.draw(shape);
        window.display();
     }
    return 0;
}

