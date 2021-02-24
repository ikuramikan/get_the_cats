# include "Result.hpp"

Result::Result(const InitData& init)
	: IScene(init)
{
}

void Result::update()
{
	cat_anime.update();
	if (end_buttom.rounded(20).mouseOver())
	{
		transition.update(true);
	}
	else
	{
		transition.update(false);
	}

	if (end_buttom.leftClicked())
	{
		getData().game_score = 0;
		changeScene(State::Title);
	}
}

void Result::draw() const
{
	cat_anime.draw();
	end_buttom.rounded(20).draw(ColorF(1.0, 0.3, 0.3)).drawFrame(0, 3, ColorF(0.25));
	font(U"YOUR SCORE: {}"_fmt(game_score)).drawAt((Vec2{ 600, 470 } - Vec2(0, 60)).movedBy(Vec2(2, 2)), ColorF(0));
	font(U"YOUR SCORE: {}"_fmt(game_score)).drawAt(Vec2{ 600, 470 } -Vec2(0, 60), ColorF(1));
	font(U"TITLE").drawAt(Vec2{ 600, 470 }, ColorF(transition.value()));
}
