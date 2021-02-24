#include "Dark.hpp"

Dark::Dark()
{
	light_pos = Cursor::Pos();
	polygon = Polygon{
		{Vec2(-800, -600), Vec2(1600, -600), Vec2(1600, 1200), Vec2(-800, 1200)},
		{{Vec2(450, 250), Vec2(350, 250), Vec2(350, 350), Vec2(450, 350)}}
	};
	transparency = 1.0;
}

void Dark::draw() const
{
	polygon.movedBy(light_pos - Vec2(400, 300)).draw(ColorF(0, 0, 0, transparency));
}

void Dark::update()
{
	light_pos = Cursor::Pos();
}