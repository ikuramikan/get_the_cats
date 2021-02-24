#pragma once
#include "Common.hpp"

class Dark
{
private:
	Vec2 light_pos;
	Polygon polygon;
	double transparency;

public:
	Dark();
	void draw() const;
	void update();
};