#pragma once
#include "Common.hpp"
#include "Cat_anime.hpp"

class Result : public MyApp::Scene
{
private:
	const Font font{30};
	RectF end_buttom{ Arg::center = Vec2{600, 470}, 200, 60 };
	int32 game_score = getData().game_score;
	Transition transition{ 0.4s, 0.2s };
	Cat_anime cat_anime;

public:

	Result(const InitData& init);

	void update() override;

	void draw() const override;
};
