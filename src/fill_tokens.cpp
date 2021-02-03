/*
** Personal project
** Connect-Four
** File description:
** fill_tokens
*/

#include "game_includes.hpp"

void clickedCircle(std::vector<sf::CircleShape> &holes, sf::RenderWindow &myWindow, unsigned long int i)
{
    sf::Vector2i mouse_pos = sf::Mouse::getPosition();
    sf::FloatRect circle_bounds;
    sf::Vector2f f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y};

    mouse_pos = sf::Mouse::getPosition();
    f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y - 50};
    circle_bounds = holes[i].getGlobalBounds();
    if (circle_bounds.contains(f_mouse_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
        holes[i].setFillColor(sf::Color::Red);
    myWindow.draw(holes[i]);
}

void insideCircle(std::vector<sf::CircleShape> holes, sf::RenderWindow &myWindow, unsigned long int i)
{
    sf::Vector2i mouse_pos = sf::Mouse::getPosition();
    sf::FloatRect circle_bounds;
    sf::Vector2f f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y};

    mouse_pos = sf::Mouse::getPosition();
    f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y - 50};
    circle_bounds = holes[i].getGlobalBounds();
    if (circle_bounds.contains(f_mouse_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) != true)
        holes[i].setFillColor(sf::Color(255, 0, 0, 150));
    myWindow.draw(holes[i]);
}