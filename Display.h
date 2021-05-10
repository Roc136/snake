#pragma once
#include <iostream>

namespace Display
{
	void front_page();
	void set_page();
	void end_page(const char* name, int score, int ranking);
	void set_color(int a);
	void readme();
	void leaderboard();
	std::string center(const char* s, int w);
	void set_position(int x, int y);
	void hide_cursor();
}