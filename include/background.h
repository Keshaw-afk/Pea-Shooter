#ifndef background_h
#define background_h

#include <string>
#include <raylib.h>

class Background {
private:
	float positionX, positionY;
	Texture2D sprite;
public:
	Background();

	float getPositionX() const;

	float getPositionY() const;

	void setPosition(float x, float y);

	void backgroundSprite(const std::string& spritePath);

	void draw() const;
};

#endif 
