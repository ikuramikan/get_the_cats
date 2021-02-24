#pragma once
#include "Common.hpp"

class Cat
{
private:
	Vec2 pos;
	Texture texture;
	Polygon polygon;

	// helper
	Image image;
	void next_pos();

public:
	Cat();
	void draw() const;
	bool update();

	bool is_clicked() const;
};