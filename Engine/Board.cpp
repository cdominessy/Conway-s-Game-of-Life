#include "Board.h"
#include "Game.h"

void Board::draw(Graphics & gfx) const
{
	for (int x = 0; x < Game::numXTiles; x++)
	{
		for (int y = 0; y < Game::numYTiles; y++)
		{
			gfx.PutBorderedRect(x * tileSize, y * tileSize, tileSize, tileSize,
				Colors::White, Colors::Black);
		}
	}
}
