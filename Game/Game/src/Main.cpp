# include "Common.hpp"
# include "Title.hpp"
# include "Game.hpp"
# include "Result.hpp"

void Main()
{
	// タイトルを設定
	Window::SetTitle(U"GET THE CATS!");

	// 背景色を設定
	Scene::SetBackground(ColorF(0.3));


	// シーンと遷移時の色を設定
	MyApp manager;
	manager
		.add<Title>(State::Title)
		.add<Game>(State::Game)
		.add<Result>(State::Result)
		.setFadeColor(ColorF(1.0));

	while (System::Update())
	{
		if (!manager.update())
		{
			break;
		}
	}
}
