/*
** Personal Project
** Connect-Four
** File description:
** main
*/

#include "game_includes.hpp"

int main(void)
{
    int **tokens = create_tokens();
    sf::RectangleShape board = makeBoard();
    windowManagement(board);
    delete_tokens(tokens);
    return 0;
}