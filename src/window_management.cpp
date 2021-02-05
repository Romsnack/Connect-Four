/*
** Personal Project
** Connect-Four
** File description:
** window_management
*/

#include "objects.hpp"

void eventManagement(sf::RenderWindow &myWindow)
{
    sf::Event event;
    while (myWindow.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                myWindow.close();
    }
}

void windowManagement(Board game)
{
    sf::RenderWindow myWindow(sf::VideoMode(1920, 1080), "Connect 4");
    bool player = true;


    myWindow.setFramerateLimit(60);
    while (myWindow.isOpen()) {
        print2Darr(game.gameBoard);
        eventManagement(myWindow);
        myWindow.clear(sf::Color::White);
        myWindow.draw(game.myBoard);
        drawCircles(game, myWindow, player);
        myWindow.display();
    }
}