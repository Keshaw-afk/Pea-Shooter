#include <iostream>
#include "background.h"

int main() {
    // Create an object of the Background class
    Background bg(0.0f, 0.0f);  // Initial position (0, 0)
    
    // Display the initial background position
    bg.displayPosition();

    // Change position
    bg.setPosition(100.0f, 200.0f);

    // Display the updated position
    bg.displayPosition();

    return 0;
}

