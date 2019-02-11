#include "Board.h"

Board::Board(Graphics & gfx)
	:
	gfx(gfx)
{
}

void Board::DrawCell(const Location & loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x < width);
	assert(loc.y >= 0);
	assert(loc.y < height);
	gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}

int Board::getGridWidth()
{
	return width;
}

int Board::getGridHeight()
{
	return height;
}



/*void Board::DrawHead(Location & loc, int vel_x, int vel_y)
{
	const int x = loc.x * CellWidth;
	const int y = loc.x * CellHeight;
	if (vel_x > 0)
	{
		Pixelart::DrawFelconRight(gfx);
	}
	else if (vel_x < 0)
	{
		Pixelart::DrawFelconLeft(gfx);
	}
	else if (vel_y > 0)
	{
		Pixelart::DrawFelconUp(gfx);
	}
	else if (vel_y < 0)
	{
		Pixelart::DrawFelconDown(gfx);
	}
}*/
