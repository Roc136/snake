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


//��ҳ
void Display::front_page()
{
	Sleep(N);
	cout << "                  " << endl; set_color(10);
	cout <<  "/~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\               /" << endl;
	cout <<  "/               \\" << endl;
	cout << "\\  ����������   /" << endl;
	cout <<  "/�������������� \\" << endl;
	cout << "\\������  ������ /" << endl;
	cout <<  "/������         \\" << endl;
	cout << "\\  ��������     /" << endl;
	cout <<  "/   ����������  \\" << endl;
	cout << "\\        ������ /" << endl;
	cout <<  "/������  ������ \\" << endl;
	cout << "\\�������������� /" << endl;
	cout <<  "/  ����������   \\" << endl;
	cout << "\\               /" << endl;
	cout <<  "/               \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~" << endl;
	
	Sleep(N);

	system("cls");
	cout << "                                      " << endl; set_color(11);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                   /" << endl;
	cout <<  "/                                   \\" << endl;
	cout << "\\  ����������    ������        ���� /" << endl;
	cout <<  "/��������������  ��������      ���� \\" << endl;
	cout << "\\������  ������  ���� ����     ���� /" << endl;
	cout <<  "/������          ����  ����    ���� \\" << endl;
	cout << "\\  ��������      ����   ����   ���� /" << endl;
	cout <<  "/   ����������   ����    ����  ���� \\" << endl;
	cout << "\\        ������  ����     ���� ���� /" << endl;
	cout <<  "/������  ������  ����      �������� \\" << endl;
	cout << "\\��������������  ����        ������ /" << endl;
	cout <<  "/  ����������    ����          ���� \\" << endl;
	cout << "\\                                   /" << endl;
	cout <<  "/                                   \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Sleep(N);

	system("cls");
	cout << "                                                     " << endl; set_color(12);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                                   /" << endl;
	cout <<  "/                                                   \\" << endl;
	cout << "\\  ����������    ������        ����      ������     /" << endl;
	cout <<  "/��������������  ��������      ����    ����������   \\" << endl;
	cout << "\\������  ������  ���� ����     ����   ����    ����  /" << endl;
	cout <<  "/������          ����  ����    ����  ����      ���� \\" << endl;
	cout << "\\  ��������      ����   ����   ����  ����      ���� /" << endl;
	cout <<  "/   ����������   ����    ����  ����  �������������� \\" << endl;
	cout << "\\        ������  ����     ���� ����  �������������� /" << endl;
	cout <<  "/������  ������  ����      ��������  ����      ���� \\" << endl;
	cout << "\\��������������  ����        ������  ����      ���� /" << endl;
	cout <<  "/  ����������    ����          ����  ����      ���� \\" << endl;
	cout << "\\                                                   /" << endl;
	cout <<  "/                                                   \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Sleep(N);

	system("cls");
	cout << "                                                                    " << endl; set_color(13);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                                                  /" << endl;
	cout <<  "/                                                                  \\" << endl;
	cout << "\\  ����������    ������        ����      ������      ����       �� /" << endl;
	cout <<  "/��������������  ��������      ����    ����������    ����      ��  \\" << endl;
	cout << "\\������  ������  ���� ����     ����   ����    ����   ����    ��    /" << endl;
	cout <<  "/������          ����  ����    ����  ����      ����  ����  ��      \\" << endl;
	cout << "\\  ��������      ����   ����   ����  ����      ����  ���� ��       /" << endl;
	cout <<  "/   ����������   ����    ����  ����  ��������������  ������        \\" << endl;
	cout << "\\        ������  ����     ���� ����  ��������������  ���� ��       /" << endl;
	cout <<  "/������  ������  ����      ��������  ����      ����  ����   ��     \\" << endl;
	cout << "\\��������������  ����        ������  ����      ����  ����     ��   /" << endl;
	cout <<  "/  ����������    ����          ����  ����      ����  ����      ����\\" << endl;
	cout << "\\                                                                  /" << endl;
	cout <<  "/                                                                  \\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	Sleep(N);

	system("cls");
	cout << "                                                                                " << endl; set_color(14);
	cout <<  "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\" << endl;
	cout << "\\                                                                                /" << endl;
	cout <<  "/                                                                                \\" << endl;
	cout << "\\  ����������    ������        ����      ������      ����       ��  ������������ /" << endl;
	cout <<  "/��������������  ��������      ����    ����������    ����      ��   ������������ \\" << endl;
	cout << "\\������  ������  ���� ����     ����   ����    ����   ����    ��     ����         /" << endl;
	cout <<  "/������          ����  ����    ����  ����      ����  ����  ��       ����         \\" << endl;
	cout << "\\  ��������      ����   ����   ����  ����      ����  ���� ��        ������������ /" << endl;
	cout <<  "/   ����������   ����    ����  ����  ��������������  ������         ������������ \\" << endl;
	cout << "\\        ������  ����     ���� ����  ��������������  ���� ��        ����         /" << endl;
	cout <<  "/������  ������  ����      ��������  ����      ����  ����   ��      ����         \\" << endl;
	cout << "\\��������������  ����        ������  ����      ����  ����     ��    ������������ /" << endl;
	cout <<  "/  ����������    ����          ����  ����      ����  ����      ���� ������������ \\" << endl;
	cout << "\\                                                                                /" << endl;
	cout <<  "/                                                                            @Roc\\" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; set_color(10);

	Sleep(N); 
	
	cout << "ʹ�� �� �� �� �� ���� W A S D ���ƣ���P��ͣ���������Esc�˳�" << endl;
	cout << "��Enter������" << endl;
	while( _getch() != 13);
	system("cls");
}

void Display::set_page()
{
	system("cls");
	cout << "                                      " << endl; set_color(14);
	cout << "    ��==============================��" << endl;
	cout << "    ||         *----------*         ||" << endl;
	cout << "    ||         |  ̰����  |         ||" << endl;
	cout << "    ||         *----------*         ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||  |      1.��ʼ��Ϸ        |  ||" << endl;
	cout << "    ||  |      2.�޸��ٶ�        |  ||" << endl;
	cout << "    ||  |      3.�޸��ϰ���      |  ||" << endl;
	cout << "    ||  |      4.�޸�Χǽ����    |  ||" << endl;
	cout << "    ||  |      5.����˵��        |  ||" << endl;
	cout << "    ||  |      6.�鿴���а�      |  ||" << endl;
	cout << "    ||  |      7.�˳�            |  ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ��==============================��" << endl;
	cout << "                                      " << endl;
}

void Display::end_page(const char* name, int score, int ranking)
{
	system("cls");
	cout << "                                      " << endl; set_color(14);
	cout << "    ��==============================��" << endl;
	cout << "    ||        *-----------*         ||" << endl;
	cout << "    ||        | GameOver! |         ||" << endl;
	cout << "    ||        *-----------*         ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||  |�û���" << setw(18) << left << name << "|  ||" << endl;
	cout << "    ||  |�÷֣�" << setw(18) << left << score << "|  ||" << endl;
	cout << "    ||  *------------------------*  ||" << endl;
	cout << "    ||                              ||" << endl;
	cout << "    ��==============================��" << endl;
	cout << "                                      " << endl;
	cout << "��Enter������" << endl;
	while(_getch() != 13);
	return;
}

//������ɫ
void Display::set_color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void Display::readme()
{
	cout << "ʹ�� �� �� �� �� �� w a s d �����ƣ���p��ͣ���������Esc�˳�\n��Enter������" << endl;
	while(_getch() != 13);
	return;
}

void Display::leaderboard()
{
	FILE* pfile = fopen("users.txt", "r");
	if (pfile == NULL)
	{
		cout << "��ѯʧ�ܣ�" << endl;
		cout << "��Enter������" << endl;
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
	cout << "    ��================================================================��" << endl;
	cout << "    ||                         *------------*                         ||" << endl;
	cout << "    ||                         |   ���а�   |                         ||" << endl;
	cout << "    ||                         *------------*                         ||" << endl;
	cout << "    ||                                                                ||" << endl;
	cout << "    ||  *----------------------------------------------------------*  ||" << endl;
	if (num == 0)
		cout << "    ||  |                        �����û���                        |  ||" << endl;
	else
	{
		cout << "    ||  | ���� |                 �û�                 |��ʷ��ߵ÷�|  ||" << endl;
		cout << "    ||  *----------------------------------------------------------*  ||" << endl;
	}

	for (int i = 0; i < num; i++)
		cout << "    ||  |"<< center(users[i].ranking, 6) << "|" << center(users[i].name, 38) << "|" << center(users[i].score, 12) << "|  ||" << endl;
	
	cout << "    ||  *----------------------------------------------------------*  ||" << endl;
	cout << "    ||                                                                ||" << endl;
	cout << "    ��================================================================��" << endl;
	cout << "                                                                        " << endl;
	fclose(pfile);
	cout << "��Enter������" << endl;
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

void Display::set_position(int x, int y)      //�趨���λ��
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