/*
** Personal Project
** Connect-Four
** File description:
** make_tokens
*/

#include "objects.hpp"

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
    printf("Creating 2D int array\n");
    return tokens;
}

int getBottom(int **tokens, int i)
{
    int bottom = 5;
    while (tokens[bottom][i % 7] != 0) {
        if (bottom == 0)
            return bottom;
        bottom--;
    }
    return bottom;
}

void addToken(int **tokens, int i, bool player)
{
    if (player == true)
        tokens[getBottom(tokens, i)][i % 7] = 1;
    else
        tokens[getBottom(tokens, i)][i % 7] = 2;
}

void print2Darr(int **tokens)
{
    int i = 0;
    int j = 0;

    while (j < 6) {
        while (i < 7) {
            printf("| %d |", tokens[j][i]);
            i++;
        }
        i = 0;
        j++;
        printf("\n");
    }
    printf("\n");
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