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
	ImageResize(&image , 2600, 1800);
	sprite = LoadTextureFromImage(image);
	

}

void Background::draw() const{
	DrawTexture(sprite, -200, -100, WHITE);
}








