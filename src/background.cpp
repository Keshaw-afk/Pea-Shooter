#include <background.h>
#include <raylib.h>
#include <iostream>

#define originX 0 //to set background position at (0, 0)
#define originY 0

Background::Background() : positionX(originX), positionY(originY), sprite{}{

}

float Background::getPositionX() const{
	return positionX;
}

float Background::getPositionY() const{
	return positionY;
}

void Background::setPosition(float x, float y){
	positionX = x;
	positionY = y;
}

void Background::backgroundSprite(const std::string& spritePath){
	Image image = LoadImage(spritePath.c_str());
	ImageResize(&image , 1800, 1200);
	sprite = LoadTextureFromImage(image);
	

}

void Background::draw() const{
	DrawTexture(sprite, 0, 0, WHITE);
}

/*
void Background::draw() const{
	float screen_width = static_cast<float>(GetScreenWidth());
	float screen_height = static_cast<float>(GetScreenHeight());

	float scale_X = screen_width / sprite.width;
	float scale_Y = screen_height/ sprite.height;


	Rectangle rectangle = {
		0.0f,
		0.0f,
		screen_width,
		screen_height
	};

	DrawTexturePro(sprite,
			Rectangle{0, 0, (float)sprite.width, (float)sprite.height},
			rectangle, 
			Vector2{0, 0}, 
			0.0f, 
			WHITE
			);
}
*/
/*void Background::draw() const {
    float screen_width = static_cast<float>(GetScreenWidth());
    float screen_height = static_cast<float>(GetScreenHeight());

    // Calculate the scale for both dimensions
    float scaleX = screen_width / sprite.width;
    float scaleY = screen_height / sprite.height;

    // Select the LARGER scale factor to fill the screen
    float scale = (scaleX > scaleY) ? scaleX : scaleY;

    // Define destination rectangle with scaled dimensions
    Rectangle destRect = {
        0.0f,                     // X position
        0.0f,                     // Y position
        scale * sprite.width,     // Scaled width
        scale * sprite.height     // Scaled height
    };

    // Draw the sprite
    DrawTexturePro(
        sprite,                                // Texture
        Rectangle{0, 0, (float)sprite.width, (float)sprite.height}, // Full sprite
        destRect,                              // Scaled destination
        Vector2{0, 0},                         // No origin offset
        0.0f,                                  // No rotation
        WHITE                                  // Normal tint
    );
}
*/



/*
void Background::draw() const {
    // Get screen dimensions
    float screen_width = static_cast<float>(GetScreenWidth());
    float screen_height = static_cast<float>(GetScreenHeight());

    // Calculate scale factors for both axes
    float scaleX = screen_width / static_cast<float>(sprite.width);
    float scaleY = screen_height / static_cast<float>(sprite.height);

    // Determine the larger scale factor to fill the screen
    float finalScale = (scaleX > scaleY) ? scaleX : scaleY;

    // Destination rectangle
    Rectangle destRect = {
        0.0f,                                // Top-left corner X
        0.0f,                                // Top-left corner Y
        sprite.width * finalScale,           // Adjusted width
        sprite.height * finalScale           // Adjusted height
    };

    // Draw the texture
    DrawTexturePro(
        sprite,                              // The texture
        Rectangle{0, 0, (float)sprite.width, (float)sprite.height}, // Full source texture
        destRect,                            // Destination rectangle
        Vector2{0, 0},                       // Origin for transformations
        0.0f,                                // Rotation
        WHITE                                // Tint color
    );
    std::cout << "Screen Width: " << screen_width 
          << ", Screen Height: " << screen_height << std::endl;
    std::cout << "Sprite Width: " << sprite.width 
          << ", Sprite Height: " << sprite.height << std::endl;
    std::cout << "ScaleX: " << scaleX << ", ScaleY: " << scaleY 
          << ", Final Scale: " << finalScale << std::endl;

}*/







