/*
** Personal project
** Connect-Four
** File description:
** fill_tokens
*/

#include "game_includes.hpp"

void insideCircle(std::vector<sf::CircleShape> holes, sf::RenderWindow &myWindow)
{
    long unsigned int i = 0;
    sf::Vector2i mouse_pos = sf::Mouse::getPosition();
    sf::FloatRect circle_bounds;
    sf::Vector2f f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y};

    while (i < holes.size()) {
        mouse_pos = sf::Mouse::getPosition();
        f_mouse_pos = {(float)mouse_pos.x, (float)mouse_pos.y - 50};
        circle_bounds = holes[i].getGlobalBounds();
        if (circle_bounds.contains(f_mouse_pos))
            holes[i].setFillColor(sf::Color::Red);
        else
            holes[i].setFillColor(sf::Color::White);
        myWindow.draw(holes[i]);
        i++;
    }
}