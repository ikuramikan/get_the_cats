
# pragma once
# include <Siv3D.hpp> // OpenSiv3D v0.4.2

// シーンの名前
enum class State
{
	Title,

	Game,

	Result
};

// ゲームデータ
struct GameData
{
	// ハイスコア
	int32 game_score = 0;
};

// シーン管理クラス
using MyApp = SceneManager<State, GameData>;
