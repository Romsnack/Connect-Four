/*
** Personal project
** Connect-Four
** File description:
** fill_tokens
*/

#include "objects.hpp"

void clickedCircle(Board &game, sf::RenderWindow &myWindow, unsigned long int i, bool &player)
{
    sf::Vector2i mouse_pos = sf::Mouse::getPosition();
    sf::FloatRect circle_bounds;
    sf::Vector2f f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y};

    mouse_pos = sf::Mouse::getPosition();
    f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y - 50};
    circle_bounds = game.holes[i].token.getGlobalBounds();
    if (circle_bounds.contains(f_mouse_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && 
        player == true && game.holes[i].token.getFillColor() == sf::Color::White) {
        addToken(game.gameBoard, i, player);
        game.holes[i].token.setFillColor(sf::Color::Red);
        player = false;
    } else if (circle_bounds.contains(f_mouse_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) &&
        player == false && game.holes[i].token.getFillColor() == sf::Color::White) {
        addToken(game.gameBoard, i, player);
        game.holes[i].token.setFillColor(sf::Color::Yellow);
        player = true;
    }
    myWindow.draw(game.holes[i].token);
}

void insideCircle(Board game, sf::RenderWindow &myWindow, unsigned long int i, bool &player)
{
    sf::Vector2i mouse_pos = sf::Mouse::getPosition();
    sf::FloatRect circle_bounds;
    sf::Vector2f f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y};

    mouse_pos = sf::Mouse::getPosition();
    f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y - 50};
    circle_bounds = game.holes[i].token.getGlobalBounds();
    if (circle_bounds.contains(f_mouse_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) != true &&
        player == true && game.holes[i].token.getFillColor() == sf::Color::White) {
        game.holes[i].token.setFillColor(sf::Color(255, 0, 0, 150));
    } else if (circle_bounds.contains(f_mouse_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) != true &&
        player == false && game.holes[i].token.getFillColor() == sf::Color::White) {
            game.holes[i].token.setFillColor(sf::Color(255, 255, 0, 100));
    }
    myWindow.draw(game.holes[i].token);
}