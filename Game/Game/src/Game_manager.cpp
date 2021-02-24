#include "Game_manager.hpp"

Game_manager::Game_manager()
{
	game_score = 0;
}

void Game_manager::draw() const
{
	cat.draw();
	dark.draw();
	game_timer.draw();
}

bool Game_manager::update()
{
	if (cat.update())
	{
		game_score++;
	}
	dark.update();
	game_timer.update();
	return game_timer.is_end();
}

int32 Game_manager::get_score() const
{
	return game_score;
}