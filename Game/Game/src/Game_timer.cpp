#include "Game_timer.hpp"

Game_timer::Game_timer()
{
	time_limit = 20s;
	transition = Transition{time_limit, 0s};
	pos = Vec2{ 55, 60 };
	radius = 30;
}

void Game_timer::draw() const
{
	Circle{ pos, radius }.drawPie(360_deg, 360_deg - 360_deg * transition.value());
	font(U"TIME LIMIT").drawAt(pos - Vec2{ 0, 43 }, ColorF(1));
}

void Game_timer::update()
{
	transition.update(true);
}

bool Game_timer::is_end() const
{
	return transition.isOne();
}