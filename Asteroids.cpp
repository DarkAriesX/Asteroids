#include "Asteroids.hpp"

#include <random>

std::random_device rd;
std::mt19937 seed(rd());

int side() {
    std::uniform_int_distribution<> genSide(1, 4);
    return genSide(seed);
}
sf::Vector2f generatePosition(const int& side) {
    float posX{};
    float posY{};
    if (side == 1) {
        posX = -20;
        std::uniform_int_distribution<> genPosY(-20, 620);
        posY = genPosY(seed);
        return {posX, posY};
    } else if (side == 2) {
        std::uniform_int_distribution<> genPosX(-20, 820);
        posX = genPosX(seed);
        posY = -20;
        return {posX, posY};
    } else if (side == 3) {
        posX = 820;
        std::uniform_int_distribution<> genPosY(-20, 620);
        posY = genPosY(seed);
        return {posX, posY};
    } else {
        std::uniform_int_distribution<> genPosX(-20, 820);
        posX = genPosX(seed);
        posY = 620;
        return {posX, posY};
    }
}
std::string generateScoreText(const int& score) {
    return "Score: " + std::to_string(score);
}
