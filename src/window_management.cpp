/*
** Personal Project
** Connect-Four
** File description:
** window_management
*/

#include "game_includes.hpp"

void eventManagement(sf::RenderWindow &myWindow)
{
    sf::Event event;
    while (myWindow.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                myWindow.close();
    }
}

void windowManagement(sf::RectangleShape board)
{
    sf::RenderWindow myWindow(sf::VideoMode(1920, 1080), "Connect 4");
    std::vector<sf::CircleShape> holes = createHoles();

    myWindow.setFramerateLimit(60);
    while (myWindow.isOpen()) {
        eventManagement(myWindow);
        myWindow.clear(sf::Color::White);
        myWindow.draw(board);
        drawCircles(holes, myWindow);
        myWindow.display();
    }
}