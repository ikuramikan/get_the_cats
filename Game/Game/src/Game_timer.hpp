#pragma once
#include "Common.hpp"

class Game_timer
{
private:
	Transition transition;
	Duration time_limit;
	Vec2 pos;
	double radius;
	Font font{ 17 };

public:
	Game_timer();
	void draw() const;
	void update();
	bool is_end() const;
};