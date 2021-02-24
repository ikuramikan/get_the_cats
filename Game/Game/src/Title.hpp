
#pragma once
#include "Common.hpp"
#include "Cat_anime.hpp"

// タイトルシーン
class Title : public MyApp::Scene
{
private:
	const Font font{30};
	const RectF start_button{ Arg::center = Vec2{600, 470}, 200, 60 };
	Transition transition{0.4s, 0.2s};
	Cat_anime cat_anime;

public:

	Title(const InitData& init);

	void update() override;

	void draw() const override;
};
