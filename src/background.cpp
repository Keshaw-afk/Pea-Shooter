#include "background.h"
#include <iostream>

Background::Background(float x, float y) : positionX(x), positionY(y) {
    // Constructor to initialize positionX and positionY
}

float Background::getPositionX() const {
    return positionX;
}

float Background::getPositionY() const {
    return positionY;
}

void Background::setPosition(float x, float y) {
    positionX = x;
    positionY = y;
}

void Background::displayPosition() const {
    std::cout << "Background Position: (" << positionX << ", " << positionY << ")\n";
}

