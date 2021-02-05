/*
** Personal project
** Connect-Four
** File description:
** draw_game_board
*/

#include "objects.hpp"

sf::RectangleShape makeBoard()
{
    const sf::Vector2f size = {1025, 720};
    const sf::Vector2f position = {400, 100};
    sf::RectangleShape board(size);

    board.setFillColor(sf::Color::Blue);
    board.setPosition(position);
    printf("Creation of board\n");

    return board;
}

sf::CircleShape createHole(sf::Vector2f position)
{
    sf::CircleShape hole(35.0, 50);

    hole.setFillColor(sf::Color::White);
    hole.setPosition(position);
    printf("Creation of hole\n");
    return hole;
}

std::vector<Tokens> createHoles()
{
    std::vector<Tokens> holes;
    int i = 0;
    sf::Vector2f position = {430, 0};

    while (i < 42) {
        if (i % 7 == 0) {
            position.x = 430;
            position.y += 120;
        }
        holes.push_back(Tokens(position));
        position.x += 150;
        i++;
    }
    printf("Finished creation of vector containing the holes\n");
    return holes;
}

void drawCircles(Board &game, sf::RenderWindow &myWindow, bool &player)
{
    unsigned long int i = 0;

    while (i < 42) {
        clickedCircle(game, myWindow, i, player);
        insideCircle(game, myWindow, i, player);
        i++;
    }
}