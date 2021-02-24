#include "Cat_anime.hpp"

Cat_anime::Cat_anime()
{
	stopwatch = Stopwatch{ true };
	interval = 3.0;
	transition = Transition{ 1.0s, 1.0s };

	cats_number = Random<int32>(1, 1);
	for (int32 i = 0; i < cats_number; i++)
	{
		poss << RandomVec2(Scene::Rect());
	}
}

void Cat_anime::draw() const
{
	for (auto pos : poss)
	{
		texture.drawAt(pos, ColorF(1.0, transition.value()));
	}
}

void Cat_anime::update()
{
	if (stopwatch.sF() >= interval)
	{
		stopwatch.pause();
		transition.update(false);
		if (transition.isZero())
		{
			stopwatch.restart();
			next_seen();
		}
	}
	else
	{
		transition.update(true);
	}

}

void Cat_anime::next_seen()
{
	poss.clear();
	cats_number = Random<int32>(1, 1);
	for (int32 i = 0; i < cats_number; i++)
	{
		poss << RandomVec2(Scene::Rect());
	}
}