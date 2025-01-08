#include <raylib.h>
#include <background.h>

int main(){

	const int screen_width = 1200;
	const int screen_height = 800;

	InitWindow(screen_width, screen_height, "Pea Shooter");

	SetTargetFPS(20);

	Background background;

	background.setPosition(0.0f, 0.0f);
	background.backgroundSprite("assets/background.png");

	while(!WindowShouldClose()){
		BeginDrawing();

		ClearBackground(RAYWHITE);

		background.draw();

		EndDrawing();	
	}

	CloseWindow();


	return 0;
}
