#pragma warning(disable:4996)
#include "Snake.h"
#include "Display.h"
#include <iostream>
#include <random>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;

struct User
{
	char name[100] = { '\0' };
	char score[10] = { '\0' };
	char ranking[3] = { '\0' };
};

void sort(User* users, int num);

Snake::Snake()
{
	speed = 1;//初始速度为1
	barrier_num = 0;//初始障碍物数量为1
	if_fence = 1;//初始无围墙
}

Snake::~Snake() {}

void Snake::init()
{
	FILE* pfile = fopen("users.txt", "a+");
	if (pfile != NULL)
		fclose(pfile);
	srand(time(0));

	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			statu[i][j] = 0;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 400; j++)
			snake[i][j] = 0;

	food_x = food_y = 0;
	special_food_x = special_food_y = 0;

	food_num = 0;
	special_food_left_time = 30;//默认特殊食物停留时间为30

	direction = 77;//初始方向为右

	if_game_over = 0;

	score = 0;
	ranking = 0;
	operation = 0;

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = true;
	SetConsoleCursorInfo(handle, &CursorInfo);

	cout << "请输入您的用户名：";
	string name_str;
	cin >> name_str;
	const char* name_c = name_str.data();
	name = new char(strlen(name_c));
	strcpy(name, name_c);

	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);

	head = 3;
	tail = 0;
	length = 4;
	for (int i = 0; i < 4; i++)//蛇的初始位置
	{
		snake[0][i] = i;
		snake[1][i] = 0;

		statu[snake[1][i]][snake[0][i]] = 1;//将蛇身状态保存
	}
	head_x = 3;
	head_y = 0;
	statu[head_y][head_x] = 2;//蛇头

	special_food_exist = 0;

	set_barrier();//设置障碍物
	return;
}

void Snake::change_speed()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = true;
	SetConsoleCursorInfo(handle, &CursorInfo);

	cout << "当前速度：" << speed << endl;
	cout << "请输入速度（1-10）：";
	string str;
	cin >> str;
	int a = atoi(str.data());
	while (a < 1 || a > 10)
	{
		Display::set_position(1, 20);
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		Display::set_position(1, 20);
		cout << "请输入范围1-10的数字：";
		cin >> str;
		a = atoi(str.data());
	}
	speed = a;
	cout << "修改成功，";

	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);

	cout << "当前速度：" << speed << endl;
	cout << "按Enter键继续" << endl;
	while (_getch() != 13);
	return;
}

void Snake::change_barrier_num()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = true;
	SetConsoleCursorInfo(handle, &CursorInfo);

	cout << "当前障碍物数量：" << barrier_num << endl;
	cout << "请输入障碍物数量（0-5）：";
	string str;
	cin >> str;
	int a = atoi(str.data());
	while (a < 0 || a > 5)
	{
		Display::set_position(1, 20);
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		cout << "                                                                          \n";
		Display::set_position(1, 20);
		cout << "请输入范围1-5的数字：";
		cin >> str;
		a = atoi(str.data());
	}
	barrier_num = a;
	cout << "修改成功，";

	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);

	cout << "当前障碍物数量：" << barrier_num << endl;
	cout << "按Enter键继续" << endl;
	while (_getch() != 13);
	return;
}

void Snake::change_fence()
{
	cout << "当前围墙状态：";
	if (if_fence)
		cout << "有" << endl;
	else
		cout << "无" << endl;

	cout << "请输入是否设置围墙(y,n)" << endl;
	int a = _getch();
	while (a != 121 && a != 110)
	{
		a = _getch();
	}
	if (a == 121)
		if_fence = 1;
	else
		if_fence = 0;
	cout << "修改成功，";
	cout << "当前围墙状态：";
	if (if_fence)
		cout << "有" << endl;
	else
		cout << "无" << endl;
	cout << "按Enter键继续" << endl;

	while (_getch() != 13);
	return;
}

void Snake::begin()
{
	init();
	create_food();
	int ch = 0;
	while (!if_game_over)
	{
		draw();
		Sleep(300 - (int)(sqrt(speed) * 90));
		if (special_food_left_time == 0)
			destory_special_food();
		if (special_food_exist)
			special_food_left_time--;
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 224)
			{
				ch = _getch();
				if ((ch == 72) || (ch == 80) || (ch == 75) || (ch == 77))
					change_direation(ch);
			}
			else if (ch == 119)//w
				change_direation(72);
			else if (ch == 115)//s
				change_direation(80);
			else if (ch == 97)//a
				change_direation(75);
			else if (ch == 100)//d
				change_direation(77);
			else if (ch == 112)
				pause();
			else if (ch == 27)
				break;
		}
		move();
		eat();
		if_game_over = game_over();
	}
	int diff = 0;
	if (!if_fence)
		diff = 1;
	if (ch == 27)
	{
		Display::set_position(18 - 2 * diff, 10 - diff);
		cout << "*--------*";
		Display::set_position(18 - 2 * diff, 11 - diff);
		cout << "|  退出  |";
		Display::set_position(18 - 2 * diff, 12 - diff);
		cout << "*--------*";
	}
	else
	{
		Display::set_position(17 - 2 * diff, 10 - diff);
		cout << "*----------*";
		Display::set_position(17 - 2 * diff, 11 - diff);
		cout << "| GameOver |";
		Display::set_position(17 - 2 * diff, 12 - diff);
		cout << "*----------*";
	}

	save_score();//保存成绩并计算排名
	Display::set_position(1, 23);
	cout << "按Enter键继续" << endl;
	while (_getch() != 13);
	return;
}

void Snake::create_food()
{
	do {
		food_x = rand() % 20;
		food_y = rand() % 20;
	} while (statu[food_y][food_x] != 0);
	statu[food_y][food_x] = 3;
}

void Snake::create_special_food()
{
	do {
		special_food_x = rand() % 20;
		special_food_y = rand() % 20;
	} while (statu[special_food_y][special_food_x] != 0);
	statu[special_food_y][special_food_x] = 4;
	special_food_exist = 1;
}

void Snake::destory_special_food()
{
	statu[special_food_y][special_food_x] = 0;
	special_food_left_time = 30;
	special_food_exist = 0;
}

void Snake::set_barrier()
{
	for (int i = 0; i < barrier_num; i++)
	{
		int x, y;
		do
		{
			x = rand() % 19;
			y = rand() % 19;
		} while (statu[y][x] != 0 || statu[y][x + 1] != 0 || statu[y + 1][x] != 0 || statu[y][x - 1] != 0 || statu[y - 1][x] != 0);
		statu[y][x] = 5;
		int a = rand() % 2;
		if (a)
			statu[y + 1][x] = 5;
		else
			statu[y][x + 1] = 5;
	}
	return;
}

void Snake::change_direation(int a)
{
	if ((direction + a) % 2)//只有向上或向下时按左右，向左或向右时按上下才改变
		direction = a;
}

void Snake::move()
{
	switch (direction)
	{
	case 72:
		head_y--;
		break;
	case 80:
		head_y++;
		break;
	case 75:
		head_x--;
		break;
	case 77:
		head_x++;
		break;
	}
	if (!if_fence)
	{
		head_x += 20;
		head_y += 20;
		head_x %= 20;
		head_y %= 20;
	}
	head = (head + 1) % 400;
	snake[0][head] = head_x;
	snake[1][head] = head_y;

}

void Snake::eat()
{
	if (statu[head_y][head_x] == 3)
	{
		food_num++;
		score += (speed + barrier_num + 2) * 10;
		length++;
		create_food();
		if (food_num && food_num % 5 == 0 && !special_food_exist)
			create_special_food();
	}
	else if (statu[head_y][head_x] == 4)
	{
		score += (speed + barrier_num + 2) * 20;
		length++;
		special_food_left_time = 30;
		special_food_exist = 0;
	}
	else
	{
		statu[snake[1][tail]][snake[0][tail]] = 0;
		tail = (tail + 1) % 400;
	}
	return;
}

void Snake::pause()
{
	int diff = 0;
	if (!if_fence)
		diff = 1;
	Display::set_position(18 - 2 * diff, 10 - diff);
	cout << "*--------*";
	Display::set_position(18 - 2 * diff, 11 - diff);
	cout << "|暂停中…|";
	Display::set_position(18 - 2 * diff, 12 - diff);
	cout << "*--------*";
	Display::set_position(1, 23);
	int ch = _getch();
	while (ch != 112)
		ch = _getch();
	return;
}

int Snake::game_over()
{
	if (if_fence)
		if (head_x < 0 || head_x > 19 || head_y < 0 || head_y > 19)
		{
			statu[snake[1][(head + 399) % 400]][snake[0][(head + 399) % 400]] = 1;
			return 1;
		}
	if (statu[head_y][head_x] == 1 || statu[head_y][head_x] == 5)
	{
		statu[snake[1][(head + 399) % 400]][snake[0][(head + 399) % 400]] = 1;
		return 1;
	}
	else
	{
		if (head_x < 0 || head_x > 19 || head_y < 0 || head_y > 19)
		{
			head_x %= 20;
			head_y %= 20;
		}
		statu[head_y][head_x] = 2;
		statu[snake[1][(head + 399) % 400]][snake[0][(head + 399) % 400]] = 1;
	}
	return 0;
}

void Snake::draw()
{
	if (if_fence)
	{
		Display::set_color(192);
		Display::set_position(1, 1);
		for (int i = 0; i < 22; i++)
		{
			cout << "  ";
		}
		Display::set_position(1, 2);
		draw_snake(1);
		Display::set_color(192);
		for (int i = 0; i < 22; i++)
		{
			cout << "  ";
		}
		Display::set_color(10);
	}
	else
	{
		Display::set_position(1, 1);
		draw_snake(0);
	}
	Display::set_color(10);
	Display::set_position(50, 8);
	cout << "用户：" << name;
	Display::set_position(50, 9);
	cout << "长度：" << length;
	Display::set_position(50, 10);
	cout << "得分：" << score;
	Display::set_position(50, 11);
	cout << "速度：" << speed;
	Display::set_position(50, 12);
	cout << "障碍物：" << barrier_num;
	Display::set_position(50, 13);
	cout << "围墙：";
	if (if_fence)
		cout << "有";
	else
		cout << "无";
	Display::set_position(1, 23);
	return;
}

void Snake::draw_snake(int fence)
{
	Display::set_color(122);
	for (int i = 0; i < 20; i++)
	{
		if (fence)
		{
			Display::set_color(192);
			cout << "  ";
			Display::set_color(122);
		}
		for (int j = 0; j < 20; j++)
			switch (statu[i][j])
			{
			case 0:
				cout << "  "; break;
			case 1:
				cout << "●"; break;
			case 2:
				cout << "◆"; break;
			case 3:
				Display::set_color(124);
				cout << "☆";
				Display::set_color(122);
				break;
			case 4:
				Display::set_color(124);
				cout << "★";
				Display::set_color(122);
				break;
			case 5:
				Display::set_color(192);
				cout << "  ";
				Display::set_color(122);
				break;
			}
		if (fence)
		{
			Display::set_color(192);
			cout << "  ";
			Display::set_color(122);
		}
		cout << endl;
	}
	return;
}

int Snake::get_ranking() const
{
	return ranking;
}

int Snake::get_score() const
{
	return score;
}

const char* Snake::get_name() const
{
	return name;
}

void Snake::save_score()
{
	FILE* pfile = fopen("users.txt", "r");
	if (pfile == NULL)
	{
		Display::set_position(50, 7);
		cout << "保存信息失败！" << endl;
		Display::set_position(1, 23);
		int ch;
		ch = _getch();
		return;
	}

	User users[11];
	int num = 0;
	if (fscanf(pfile, "%s%s%s", users[0].name, &users[0].score, &users[0].ranking) > 0)
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
	fclose(pfile);

	int i = 0, flag = 1;
	for (; i < num; i++)
		if (!strcmp(users[i].name, name))
		{
			flag = 0;
			break;
		}
	if (flag)
		num++;
	int high_score = (atoi(users[i].score) > score) ? atoi(users[i].score) : score;
	char h_s[10] = { '\0' };
	_itoa(high_score, h_s, 10);
	strcpy(users[i].score, h_s);
	users[i].score[strlen(h_s)] = '\0';

	char ranking_c[40] = { '\0' };
	_itoa(ranking, ranking_c, 10);
	strcpy(users[i].ranking, ranking_c);
	strcpy(users[i].name, name);

	sort(users, num);

	pfile = fopen("users.txt", "w");
	if (pfile == NULL)
	{
		Display::set_position(50, 7);
		cout << "保存信息失败！" << endl;
		Display::set_position(1, 23);
		int ch;
		ch = _getch();
		return;
	}

	for (int j = 0; j < num && j < 10; j++)
	{
		fprintf(pfile, "%s %s %d\n", users[j].name, users[j].score, j + 1);
		if (!strcmp(users[j].name, name))
			ranking = j + 1;
	}
	fclose(pfile);

	return;
}

void sort(User* users, int num)
{
	for (int i = 0; i < num - 1; i++)
		for (int j = 0; j < num - i - 1; j++)
			if (atoi(users[j].score) < atoi(users[j + 1].score))
			{
				char temp[40] = { '\0' };
				strcpy(temp, users[j].name);
				strcpy(users[j].name, users[j + 1].name);
				strcpy(users[j + 1].name, temp);

				strcpy(temp, users[j].score);
				strcpy(users[j].score, users[j + 1].score);
				strcpy(users[j + 1].score, temp);

				strcpy(temp, users[j].ranking);
				strcpy(users[j].ranking, users[j + 1].ranking);
				strcpy(users[j + 1].ranking, temp);
			}
	return;
}