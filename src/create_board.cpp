/*
** EPITECH PROJECT, 2021
** Connect-Four
** File description:
** create_board
*/

#include "objects.hpp"

Board::Board()
{
    myBoard = makeBoard();
    holes = createHoles();
    gameBoard = create_tokens();
}

Board::~Board()
{
    //Noramlly you should call a function that frees my allocated 2D int array but for some reason in CPP every variable inside a class, even those allocated are getting freed. If you try to free them again you will get a double free error.
}