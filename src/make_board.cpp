/*
** Personal project
** Connect-Four
** File description:
** draw_game_board
*/

#include "game_includes.hpp"

sf::RectangleShape makeBoard()
{
    const sf::Vector2f size = {1025, 720};
    const sf::Vector2f position = {400, 100};
    sf::RectangleShape board(size);

    board.setFillColor(sf::Color::Blue);
    board.setPosition(position);

    return board;
}

sf::CircleShape createHole(sf::Vector2f position)
{
    sf::CircleShape hole(35.0, 50);

    hole.setFillColor(sf::Color::White);
    hole.setPosition(position);
    return hole;
}

std::vector<sf::CircleShape> createHoles()
{
    std::vector<sf::CircleShape> holes;
    int i = 0;
    sf::Vector2f position = {430, 0};

    while (i < 42) {
        if (i % 7 == 0) {
            position.x = 430;
            position.y += 120;
        }
        holes.push_back(createHole(position));
        position.x += 150;
        i++;
    }
    return holes;
}

void drawCircles(std::vector<sf::CircleShape> holes, sf::RenderWindow &myWindow)
{
    int i = 0;

    while (i < 42) {
        insideCircle(holes, myWindow);
        i++;
    }
}