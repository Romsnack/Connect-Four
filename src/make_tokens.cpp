/*
** Personal Project
** Connect-Four
** File description:
** make_tokens
*/

#include "game_includes.hpp"

int **create_tokens(void)
{
    int **tokens = new int*[6];
    int i = 0;
    int j = 0;

    while (j < 6) {
        i = 0;
        tokens[j] = new int[7];
        while (i < 7) {
            tokens[j][i] = 0;
            i++;
        }
        j++;
    }
    return tokens;
}

void delete_tokens(int **tokens)
{
    int i = 0;

    while (i < 6) {
        delete tokens[i];
        i++;
    }
    delete tokens;
}