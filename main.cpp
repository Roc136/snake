#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Snake.h"
#include "Display.h"
using namespace std;

int main()
{
	SetConsoleTitleA("Ã∞≥‘…ﬂ Snake");
	Display::hide_cursor();
	Display::front_page();
	Snake snake;
	while (1)
	{
		Display::set_page();
		int ch;
		ch = _getch();
		switch (ch)
		{
		case 49:case 97://1
			snake.begin();
			Display::end_page(snake.get_name(), snake.get_score(), snake.get_ranking()); 
			Display::leaderboard();
			break;
		case 50:case 98://2
			snake.change_speed(); 
			break;
		case 51:case 99://3
			snake.change_barrier_num(); 
			break;
		case 52:case 100://4
			snake.change_fence();
			break;
		case 53:case 101://5
			Display::readme();
			break;
		case 54:case 102://6
			Display::leaderboard();
			break;
		case 27:case 55:case 103://7 or Esc
			cout << "»∑»œÕÀ≥ˆ£ø[y/n]" << endl;
			ch = _getch();
			if(ch == 121)
				return 0;
		}
	}
	return 0;
}
