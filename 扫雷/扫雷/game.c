#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("**    1.play   *******\n");
	printf("**    0.exit   *******\n");
	printf("**********************\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	displayboard(show, ROW, COL);
	setmine(mine, ROW, COL, COUNT);
	//displayboard(mine, ROW, COL);
	findmine(mine, show, ROW, COL, COUNT);
}

int main()
{

	do
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}

	} while (1);
	return 0;

}