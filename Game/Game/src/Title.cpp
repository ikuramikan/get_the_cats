
# include "Title.hpp"

Title::Title(const InitData& init)
	: IScene(init)
{
}

void Title::update()
{
	cat_anime.update();
	if (start_button.rounded(20).mouseOver())
	{
		transition.update(true);
	}
	else
	{
		transition.update(false);
	}

	if (start_button.rounded(20).leftClicked())
	{
		changeScene(State::Game);
	}
}

void Title::draw() const
{
	cat_anime.draw();
	start_button.rounded(20).draw(ColorF(1.0, 0.3, 0.3)).drawFrame(0, 3, ColorF(0.25));
	font(U"GET THE CATS!").drawAt((Vec2{ 600, 470 } - Vec2(0, 60)).movedBy(Vec2(2, 2)), ColorF(0));
	font(U"GET THE CATS!").drawAt(Vec2{ 600, 470 } -Vec2(0, 60), ColorF(1));
	font(U"START").drawAt(Vec2{600, 470}, ColorF(transition.value()));
}
