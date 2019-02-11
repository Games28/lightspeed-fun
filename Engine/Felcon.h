#pragma once

#include "Board.h"

class Felcon
{
private:
	class Trail
	{
	public:
	private:
		Location loc;
		Color c;

	};

public:
	Felcon(const Location& loc);
	void MoveBy(const Location& delta_loc);
	void Expand();
	void Draw(Board& brd) const;
private:
	static constexpr int maxTrails = 100;
	Trail trails[maxTrails];
	int trailSize = 1;
};


