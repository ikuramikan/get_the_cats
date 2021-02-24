
# pragma once
# include "Common.hpp"
#include "Game_manager.hpp"

// ゲームシーン
class Game : public MyApp::Scene
{
private:

	Game_manager gm;
	// スコア
	int32 m_score = 0;

public:

	Game(const InitData& init);

	void update() override;

	void draw() const override;
};