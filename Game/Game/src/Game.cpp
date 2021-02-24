
# include "Game.hpp"

Game::Game(const InitData& init)
	: IScene(init)
{
}

void Game::update()
{
	if (gm.update())
	{
		getData().game_score = gm.get_score();
		changeScene(State::Result);
	}
}

void Game::draw() const
{
	gm.draw();
}
