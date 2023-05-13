#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;

int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Run the window loop
    while (window.isOpen())
    {
        // Check for events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close the window if the close button is clicked
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Clear the window
        window.clear();

        // Draw something to the window
        sf::RectangleShape rectangle(sf::Vector2f(50, 50));
        rectangle.setFillColor(sf::Color::Red);
        rectangle.setPosition(sf::Vector2f(400, 300));
        window.draw(rectangle);

        // Display the window
        window.display();
    }

    return 0;
}

This code creates a window using the SFML RenderWindow class and runs a loop that polls for events and draws a red rectangle to the window. The loop continues running until the user clicks the close button on the window. Note that you'll need to have the SFML library installed and linked in your project for this code to work.

