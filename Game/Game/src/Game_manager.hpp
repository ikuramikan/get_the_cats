#pragma once
#include "Common.hpp"
#include "Cat.hpp"
#include "Dark.hpp"
#include "Game_timer.hpp"

class Game_manager
{
private:
	Cat cat;
	Dark dark;
	Game_timer game_timer;
	int32 game_score;

public:
	Game_manager();
	bool update();
	void draw() const;
	int32 get_score() const;
};