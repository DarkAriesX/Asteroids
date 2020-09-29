#pragma once

#include <SFML/Graphics.hpp>
#include <string>

int side();
sf::Vector2f generatePosition(const int& side);
std::string generateScoreText(const int& score);