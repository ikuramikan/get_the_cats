#pragma once
#include "Common.hpp"

class Cat_anime
{
private:
	Texture texture{ Emoji(U"🐈") };
	Array<Vec2> poss;
	int32 cats_number;
	Stopwatch stopwatch;
	double interval;
	Transition transition;

	// helper
	void next_seen();

public:
	Cat_anime();
	void draw() const;
	void update();
};
