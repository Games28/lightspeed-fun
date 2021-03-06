#pragma once
#include "Graphics.h"
#include "Location.h"
#include "Pixelart.h"
#include "Location.h"
#include <assert.h>

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(const Location& loc, Color c);
	int getGridWidth();
	int getGridHeight();
	
	//void DrawHead(Location& loc, int vel_x, int vel_y);

private:
	static constexpr int dimension = 20;
	static constexpr int width = 10;
	static constexpr int height  = 10;
	Graphics& gfx;
};


