/*
** Personal Project
** Connect-Four
** File description:
** game_includes
*/

#ifndef GAME_INCLUDES_HPP_
#define GAME_INCLUDES_HPP_

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>

void windowManagement(sf::RectangleShape board);
void eventManagement(sf::RenderWindow &myWindow);
sf::RectangleShape makeBoard();
std::vector<sf::CircleShape> createHoles();
void drawCircles(std::vector<sf::CircleShape> holes, sf::RenderWindow &myWindow);
int **create_tokens(void);
void delete_tokens(int **tokens);



#endif /* !GAME_INCLUDES_HPP_ */
