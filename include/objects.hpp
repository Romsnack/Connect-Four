/*
** EPITECH PROJECT, 2021
** Connect-Four
** File description:
** board
*/

#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>

class Tokens {
    public:
        Tokens(sf::Vector2f position);
        ~Tokens();
        sf::CircleShape token;
    private:
    protected:
};


class Board {
    public:
        Board();
        ~Board();
        sf::RectangleShape myBoard;
        int **gameBoard;
        std::vector<Tokens> holes;        
    private:
    protected:
};

void windowManagement(Board game);
void eventManagement(sf::RenderWindow &myWindow);
sf::RectangleShape makeBoard();
std::vector<Tokens> createHoles();
int **create_tokens(void);
void delete_tokens(int **tokens);
void addToken(int **tokens, int i, bool player);
int getBottom(int **tokens, int i);
sf::CircleShape createHole(sf::Vector2f position);
void clickedCircle(Board &game, sf::RenderWindow &myWindow, unsigned long int i, bool &player);
void insideCircle(Board game, sf::RenderWindow &myWindow, unsigned long int i, bool &player);
void drawCircles(Board &game, sf::RenderWindow &myWindow, bool &player);
void print2Darr(int **tokens);


#endif /* !BOARD_HPP_ */
