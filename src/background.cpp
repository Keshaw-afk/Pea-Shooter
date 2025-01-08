#include <background.h>
#include <raylib.h>

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
	sprite = LoadTexture(spritePath.c_str());
}

void Background::draw() const{
	DrawTexture(sprite, static_cast<int>(positionX), static_cast<int>(positionY), WHITE);
}






