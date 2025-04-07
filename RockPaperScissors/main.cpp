#include <iostream>
#include <Windows.h>

#define SleepTime 200
#pragma execution_character_set("utf-8")

using std::cout;
using std::cin;
using std::endl;


enum ROCK_PAPER_SCISSORS
{
	ROCK = 1,
	PAPER,
	SCISSORS,
	EXIT
};

int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleTitle(L"ROCK PAPER SCISSORS");
	system("mode con:cols=67 lines=43");


	while (true)
	{
		// com => random
		srand(time(NULL));
		ROCK_PAPER_SCISSORS com = static_cast<ROCK_PAPER_SCISSORS>(rand() % PAPER + ROCK);

		// player 입력 받기
		int player;

		/*
		가위바위보 애니메이션
		*/
		while (true)
		{
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << "______________________ ROCK  PAPER SCISSORS  _____________________" << endl << endl << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			cout << "\t⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀" << endl;
			cout << "\t⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀" << endl;
			cout << "\t ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀" << endl;
			cout << "\t⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇" << endl;
			cout << "\t⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿" << endl;
			cout << "\t⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏" << endl;
			cout << "\t⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁" << endl;
			cout << "\t⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋" << endl;
			cout << "\t⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁" << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << endl << endl << endl << endl << endl << "\t\t\t Press Enter Key" << endl << endl;
			Sleep(SleepTime);

			if (GetAsyncKeyState(VK_RETURN) & 0x1)
			{
				player = ROCK;
				break;
			}

			system("cls");
			cout << endl << "______________________ ROCK  PAPER SCISSORS  _____________________" << endl << endl << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄" << endl;
			cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿" << endl;
			cout << "\t⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ ⠀⠀ ⠀⣰⠏⢀⣤⣤⣄⡀" << endl;
			cout << "\t⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀  ⢀⣾⣣⡴⠚⠉⠀ ⠈⠹⡆" << endl;
			cout << "\t⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀⠀ ⠀⠀⣠⡾⠋⠁⠀⠀⠀⠀⢀⣠⡾⠃" << endl;
			cout << "\t⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⣠⠶⠋⠁" << endl;
			cout << "\t⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄" << endl;
			cout << "\t⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃" << endl;
			cout << "\t⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉" << endl;
			cout << "\t⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉" << endl;
			cout << "\t⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁" << endl;
			cout << "\t ⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁" << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << endl << endl << "\t\t\t Press Enter Key" << endl << endl;
			Sleep(SleepTime);

			if (GetAsyncKeyState(VK_RETURN) & 0x1)
			{
				player = PAPER;
				break;
			}

			system("cls");
			cout << endl << "______________________ ROCK  PAPER SCISSORS  _____________________" << endl << endl << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\t⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀" << endl;
			cout << "\t⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀" << endl;
			cout << "\t⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀" << endl;
			cout << "\t⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄" << endl;
			cout << "\t⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆" << endl;
			cout << "\t⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃" << endl;
			cout << "\t⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀" << endl;
			cout << "\t⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄" << endl;
			cout << "\t⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷" << endl;
			cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠦⠾⠃" << endl;

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << endl << endl << endl << endl << endl << "\t\t\t Press Enter Key" << endl << endl;
			Sleep(SleepTime);

			if (GetAsyncKeyState(VK_RETURN) & 0x1)
			{
				player = SCISSORS;
				break;
			}



		}

		/*
		결과 출력
		*/
		while (true)
		{
			system("cls");
			cout << endl << "______________________ ROCK  PAPER SCISSORS  _____________________" << endl << endl << endl << endl;
			cout << endl << endl;


			if (ROCK > player || player > EXIT)
			{
				cout << endl << endl << "\t\t\t잘못된 입력입니다.";
				system("pause>null");
				continue;
			}
			if (player == EXIT)
			{
				cout << endl << endl << "\t\t\t게임 종료" << endl;
				break;
			}

			cout << " COM" << endl;
			switch (com)
			{
			case ROCK:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << "\t⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀" << endl;
				cout << "\t⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀" << endl;
				cout << "\t ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀" << endl;
				cout << "\t⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇" << endl;
				cout << "\t⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿" << endl;
				cout << "\t⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏" << endl;
				cout << "\t⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁" << endl;
				cout << "\t⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋" << endl;
				cout << "\t⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁" << endl;
				break;
			case PAPER:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
				cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄" << endl;
				cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿" << endl;
				cout << "\t⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ ⠀⠀ ⠀⣰⠏⢀⣤⣤⣄⡀" << endl;
				cout << "\t⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀  ⢀⣾⣣⡴⠚⠉⠀ ⠈⠹⡆" << endl;
				cout << "\t⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀⠀ ⠀⠀⣠⡾⠋⠁⠀⠀⠀⠀⢀⣠⡾⠃" << endl;
				cout << "\t⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⣠⠶⠋⠁" << endl;
				cout << "\t⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄" << endl;
				cout << "\t⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃" << endl;
				cout << "\t⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉" << endl;
				cout << "\t⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉" << endl;
				cout << "\t⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁" << endl;
				cout << "\t ⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁" << endl;
				break;
			case SCISSORS:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				cout << "\t⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀" << endl;
				cout << "\t⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀" << endl;
				cout << "\t⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀" << endl;
				cout << "\t⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄" << endl;
				cout << "\t⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆" << endl;
				cout << "\t⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃" << endl;
				cout << "\t⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀" << endl;
				cout << "\t⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄" << endl;
				cout << "\t⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷" << endl;
				cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠦⠾⠃" << endl;
				break;

			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << " YOU" << endl;
			switch (player)
			{
			case ROCK:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << "\t\t\t\t⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀" << endl;
				cout << "\t\t\t\t⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀" << endl;
				cout << "\t\t\t\t ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀" << endl;
				cout << "\t\t\t\t⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇" << endl;
				cout << "\t\t\t\t⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿" << endl;
				cout << "\t\t\t\t⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏" << endl;
				cout << "\t\t\t\t⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁" << endl;
				cout << "\t\t\t\t⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋" << endl;
				cout << "\t\t\t\t⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁" << endl;
				break;
			case PAPER:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
				cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄" << endl;
				cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿" << endl;
				cout << "\t\t\t\t⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ ⠀⠀ ⠀⣰⠏⢀⣤⣤⣄⡀" << endl;
				cout << "\t\t\t\t⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀  ⢀⣾⣣⡴⠚⠉⠀ ⠈⠹⡆" << endl;
				cout << "\t\t\t\t⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀⠀ ⠀⠀⣠⡾⠋⠁⠀⠀⠀⠀⢀⣠⡾⠃" << endl;
				cout << "\t\t\t\t⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⣠⠶⠋⠁" << endl;
				cout << "\t\t\t\t⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄" << endl;
				cout << "\t\t\t\t⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃" << endl;
				cout << "\t\t\t\t⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉" << endl;
				cout << "\t\t\t\t⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉" << endl;
				cout << "\t\t\t\t⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁" << endl;
				cout << "\t\t\t\t ⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁" << endl;
				break;
			case SCISSORS:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				cout << "\t\t\t\t⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀" << endl;
				cout << "\t\t\t\t⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀" << endl;
				cout << "\t\t\t\t⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀" << endl;
				cout << "\t\t\t\t⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄" << endl;
				cout << "\t\t\t\t⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆" << endl;
				cout << "\t\t\t\t⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃" << endl;
				cout << "\t\t\t\t⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀" << endl;
				cout << "\t\t\t\t⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄" << endl;
				cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷" << endl;
				cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠦⠾⠃" << endl;
				break;

			}
			cout << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

			// player - com 이 1 or -2일때 이김
			if (player - com == 1 || player - com == -2)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "\t\t\tW I N" << endl;
			}
			else if (player - com == 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << "\t\t\tDraw" << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				cout << "\t\t\tLOOSE" << endl;
			}
			break;
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << endl << endl << "\tIf you want to play more, press the Enter Key";

		system("pause>null");
		if (GetAsyncKeyState(VK_RETURN) & 0x1)
		{
			continue;
		}
	}





	return 0;
}