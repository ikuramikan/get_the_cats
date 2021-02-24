#include "Cat.hpp"

Cat::Cat()
{
	pos = RandomVec2(Scene::Rect());
	image = Emoji::CreateImage(U"🐈");
	polygon = image.alphaToPolygon(1, false);
	texture = Texture(Emoji(U"🐈"));
}

void Cat::draw() const
{
	texture.draw(pos - image.size() / 2);
}

void Cat::next_pos()
{
	pos = RandomVec2(Scene::Rect());
}

bool Cat::is_clicked() const
{
	return polygon.movedBy(pos - image.size()/2).leftClicked();
}

bool Cat::update()
{
	bool flag = is_clicked();
	if (flag)
	{
		next_pos();
	}
	return flag;
}