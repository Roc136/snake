#pragma warning(disable:4996)
#include "Display.h"
#include "Snake.h"
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define N 200
using namespace std;


//首页
void Display::front_page()
{
	Sleep(N);
	cout << "                  " << endl; set_color(10);
	cout <<  "/~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\               /" << endl;
	cout <<  "/               \\" << endl;
	cout << "\\  ■■■■■   /" << endl;
	cout <<  "/■■■■■■■ \\" << endl;
	cout << "\\■■■  ■■■ /" << endl;
	cout <<  "/■■■         \\" << endl;
	cout << "\\  ■■■■     /" << endl;
	cout <<  "/   ■■■■■  \\" << endl;
	cout << "\\        ■■■ /" << endl;
	cout <<  "/■■■  ■■■ \\" << endl;
	cout << "\\■■■■■■■ /" << endl;
	cout <<  "/  ■■■■■   \\" << endl;
	cout << "\\               /" << endl;
	cout <<  "/               \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~" << endl;
	
	Sleep(N);

	system("cls");
	cout << "                                      " << endl; set_color(11);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                   /" << endl;
	cout <<  "/                                   \\" << endl;
	cout << "\\  ■■■■■    ■■■        ■■ /" << endl;
	cout <<  "/■■■■■■■  ■■■■      ■■ \\" << endl;
	cout << "\\■■■  ■■■  ■■ ■■     ■■ /" << endl;
	cout <<  "/■■■          ■■  ■■    ■■ \\" << endl;
	cout << "\\  ■■■■      ■■   ■■   ■■ /" << endl;
	cout <<  "/   ■■■■■   ■■    ■■  ■■ \\" << endl;
	cout << "\\        ■■■  ■■     ■■ ■■ /" << endl;
	cout <<  "/■■■  ■■■  ■■      ■■■■ \\" << endl;
	cout << "\\■■■■■■■  ■■        ■■■ /" << endl;
	cout <<  "/  ■■■■■    ■■          ■■ \\" << endl;
	cout << "\\                                   /" << endl;
	cout <<  "/                                   \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Sleep(N);

	system("cls");
	cout << "                                                     " << endl; set_color(12);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                                   /" << endl;
	cout <<  "/                                                   \\" << endl;
	cout << "\\  ■■■■■    ■■■        ■■      ■■■     /" << endl;
	cout <<  "/■■■■■■■  ■■■■      ■■    ■■■■■   \\" << endl;
	cout << "\\■■■  ■■■  ■■ ■■     ■■   ■■    ■■  /" << endl;
	cout <<  "/■■■          ■■  ■■    ■■  ■■      ■■ \\" << endl;
	cout << "\\  ■■■■      ■■   ■■   ■■  ■■      ■■ /" << endl;
	cout <<  "/   ■■■■■   ■■    ■■  ■■  ■■■■■■■ \\" << endl;
	cout << "\\        ■■■  ■■     ■■ ■■  ■■■■■■■ /" << endl;
	cout <<  "/■■■  ■■■  ■■      ■■■■  ■■      ■■ \\" << endl;
	cout << "\\■■■■■■■  ■■        ■■■  ■■      ■■ /" << endl;
	cout <<  "/  ■■■■■    ■■          ■■  ■■      ■■ \\" << endl;
	cout << "\\                                                   /" << endl;
	cout <<  "/                                                   \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Sleep(N);

	system("cls");
	cout << "                                                                    " << endl; set_color(13);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                                                  /" << endl;
	cout <<  "/                                                                  \\" << endl;
	cout << "\\  ■■■■■    ■■■        ■■      ■■■      ■■       ■ /" << endl;
	cout <<  "/■■■■■■■  ■■■■      ■■    ■■■■■    ■■      ■  \\" << endl;
	cout << "\\■■■  ■■■  ■■ ■■     ■■   ■■    ■■   ■■    ■    /" << endl;
	cout <<  "/■■■          ■■  ■■    ■■  ■■      ■■  ■■  ■      \\" << endl;
	cout << "\\  ■■■■      ■■   ■■   ■■  ■■      ■■  ■■ ■       /" << endl;
	cout <<  "/   ■■■■■   ■■    ■■  ■■  ■■■■■■■  ■■■        \\" << endl;
	cout << "\\        ■■■  ■■     ■■ ■■  ■■■■■■■  ■■ ■       /" << endl;
	cout <<  "/■■■  ■■■  ■■      ■■■■  ■■      ■■  ■■   ■     \\" << endl;
	cout << "\\■■■■■■■  ■■        ■■■  ■■      ■■  ■■     ■   /" << endl;
	cout <<  "/  ■■■■■    ■■          ■■  ■■      ■■  ■■      ■■\\" << endl;
	cout << "\\                                                                  /" << endl;
	cout <<  "/                                                                  \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Sleep(N);

	system("cls");
	cout << "                                                                                " << endl; set_color(14);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                                                                /" << endl;
	cout <<  "/                                                                                \\" << endl;
	cout << "\\  ■■■■■    ■■■        ■■      ■■■      ■■       ■  ■■■■■■ /" << endl;
	cout <<  "/■■■■■■■  ■■■■      ■■    ■■■■■    ■■      ■   ■■■■■■ \\" << endl;
	cout << "\\■■■  ■■■  ■■ ■■     ■■   ■■    ■■   ■■    ■     ■■         /" << endl;
	cout <<  "/■■■          ■■  ■■    ■■  ■■      ■■  ■■  ■       ■■         \\" << endl;
	cout << "\\  ■■■■      ■■   ■■   ■■  ■■      ■■  ■■ ■        ■■■■■■ /" << endl;
	cout <<  "/   ■■■■■   ■■    ■■  ■■  ■■■■■■■  ■■■         ■■■■■■ \\" << endl;
	cout << "\\        ■■■  ■■     ■■ ■■  ■■■■■■■  ■■ ■        ■■         /" << endl;
	cout <<  "/■■■  ■■■  ■■      ■■■■  ■■      ■■  ■■   ■      ■■         \\" << endl;
	cout << "\\■■■■■■■  ■■        ■■■  ■■      ■■  ■■     ■    ■■■■■■ /" << endl;
	cout <<  "/  ■■■■■    ■■          ■■  ■■      ■■  ■■      ■■ ■■■■■■ \\" << endl;
	cout << "\\                                                                                /" << endl;
	cout <<  "/                                                                            @Roc\\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; set_color(10);

	Sleep(N); 
	
	cout << "使用 ↑ ↓ ← → 键或 W A S D 控制，按P暂停或继续，按Esc退出" << endl;
	cout << "按Enter键进入" << endl;
	while( _getch() != 13);
	system("cls");
}

void Display::set_page()
{
	system("cls");
	cout << "                                      " << endl; set_color(14);
	cout << "    ★==============================★" << endl;
	cout << "    ||         *----------*         ||" << endl;
	cout << "    ||         |  贪吃蛇  |         ||" << endl;
	cout << "    ||         *----------*         ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||  |      1.开始游戏        |  ||" << endl;
	cout << "    ||  |      2.修改速度        |  ||" << endl;
	cout << "    ||  |      3.修改障碍物      |  ||" << endl;
	cout << "    ||  |      4.修改围墙设置    |  ||" << endl;
	cout << "    ||  |      5.操作说明        |  ||" << endl;
	cout << "    ||  |      6.查看排行榜      |  ||" << endl;
	cout << "    ||  |      7.退出            |  ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ★==============================★" << endl;
	cout << "                                      " << endl;
}

void Display::end_page(const char* name, int score, int ranking)
{
	system("cls");
	cout << "                                      " << endl; set_color(14);
	cout << "    ★==============================★" << endl;
	cout << "    ||        *-----------*         ||" << endl;
	cout << "    ||        | GameOver! |         ||" << endl;
	cout << "    ||        *-----------*         ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||  |用户：" << setw(18) << left << name << "|  ||" << endl;
	cout << "    ||  |得分：" << setw(18) << left << score << "|  ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ★==============================★" << endl;
	cout << "                                      " << endl;
	cout << "按Enter键继续" << endl;
	while(_getch() != 13);
	return;
}

//设置颜色
void Display::set_color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void Display::readme()
{
	cout << "使用 ↑ ↓ ← → 或 w a s d 键控制，按p暂停或继续，按Esc退出\n按Enter键继续" << endl;
	while(_getch() != 13);
	return;
}

void Display::leaderboard()
{
	FILE* pfile = fopen("users.txt", "r");
	if (pfile == NULL)
	{
		cout << "查询失败！" << endl;
		cout << "按Enter键继续" << endl;
		while(_getch() != 13);
		return;
	}
	struct User
	{
		char name[100] = { '\0' };
		char score[10] = { '\0' };
		char ranking[3] = { '\0' };
	};
	User users[10];
	int num = 0;
	if(fscanf(pfile, "%s%s%s", users[0].name, &users[0].score, &users[0].ranking) > 0)
		num++;
	for (int i = 1; i < 10; i++)
	{
		if (feof(pfile))
			break;
		if (fscanf(pfile, "%s%s%s", users[i].name, &users[i].score, &users[i].ranking) > 0)
			num++;
		else
			break;
	}
	
	system("cls");
	cout << "                                                                        " << endl; set_color(12);
	cout << "    ★================================================================★" << endl;
	cout << "    ||                         *------------*                         ||" << endl;
	cout << "    ||                         |   排行榜   |                         ||" << endl;
	cout << "    ||                         *------------*                         ||" << endl;
	cout << "    ||                                                                ||" << endl;
	cout << "    ||  *----------------------------------------------------------*  ||" << endl;
	if (num == 0)
		cout << "    ||  |                        暂无用户！                        |  ||" << endl;
	else
	{
		cout << "    ||  | 排名 |                 用户                 |历史最高得分|  ||" << endl;
		cout << "    ||  *----------------------------------------------------------*  ||" << endl;
	}

	for (int i = 0; i < num; i++)
		cout << "    ||  |"<< center(users[i].ranking, 6) << "|" << center(users[i].name, 38) << "|" << center(users[i].score, 12) << "|  ||" << endl;
	
	cout << "    ||  *----------------------------------------------------------*  ||" << endl;
	cout << "    ||                                                                ||" << endl;
	cout << "    ★================================================================★" << endl;
	cout << "                                                                        " << endl;
	fclose(pfile);
	cout << "按Enter键继续" << endl;
	while(_getch() != 13);
	return;
}

string Display::center(const char* s, int w)
{
	int l = strlen(s);
	float n = (w - l) / 2.0;
	int left = floorf(n);
	int right = ceilf(n);
	string str = s;
	for (int i = 0; i < left; i++)
		str = " " + str;
	for (int i = 0; i < right; i++)
		str += " ";
	return str;
}

void Display::set_position(int x, int y)      //设定输出位置
{
	COORD coordinate;
	coordinate.X = x - 1;
	coordinate.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void Display::hide_cursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);
}