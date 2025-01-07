#ifndef BACKGROUND_H
#define BACKGROUND_H

class Background {
private:
    float positionX, positionY;  // Private properties for background position

public:
    // Constructor to initialize position
    Background(float x, float y);

    // Getter for positionX
    float getPositionX() const;

    // Getter for positionY
    float getPositionY() const;

    // Setter for position
    void setPosition(float x, float y);

    // Method to display the position (for testing)
    void displayPosition() const;
};

#endif // BACKGROUND_H

