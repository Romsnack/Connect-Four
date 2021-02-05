/*
** EPITECH PROJECT, 2021
** Connect-Four
** File description:
** create_tokens
*/

#include "objects.hpp"

Tokens::Tokens(sf::Vector2f position)
{
    token = createHole(position);
}

Tokens::~Tokens()
{
}