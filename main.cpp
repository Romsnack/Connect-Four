/*
** Personal Project
** Connect-Four
** File description:
** main
*/

#include "game_includes.hpp"

int main(void)
{
    sf::RectangleShape board = makeBoard();
    std::vector<sf::CircleShape> holes = createHoles();
    windowManagement(board);
    return 0;
}