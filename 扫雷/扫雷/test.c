#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void initboard(char board[ROWS][COLS], int rows,int cols, char s)
{
	if (s == '0') 
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < cols; j++)
			{
				board[i][j] = s;
			}

		}

	}
	if (s == '*')
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < cols; j++)
			{
				board[i][j] = '0';
			}

		}
		for ( i = 1; i < rows-1; i++)
		{
			for (j = 1; j < cols-1; j++)
			{
				board[i][j] = '*';
			}

		}

	}
	

}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------------------扫雷游戏--------------------\n");
	printf("   ");
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d  ", i);
		for ( j = 1; j <= col; j++)
		{
			printf("%c", board[i][j]);
			if (j < col)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("--------------------扫雷游戏--------------------\n");
}


void setmine(char board[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if ('0' == board[x][y])
		{
			board[x][y] = '1';
			//printf("(%d , %d)  %d\n", x, y, count);
			count--;
		}

	}
	
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	int flag = 0;
	while (1)
	{
		printf("请输入坐标探索一个地方>:\n");
		while (1)
		{
			scanf("%d %d", &x, &y);
			if (((x > 0 && x < 10) && (y > 0 && y < 10)) && show[x][y] == '*')
			{
				break;
			}
			printf("你输入的坐标没有意义！");
		}
		if (mine[x][y] == '1')
		{
			printf("很遗憾你被炸死了\n");
			show[x][y] = '!';
			displayboard(show, ROW, COL);
			break;
		}
		else
		{
			CountMind(mine, show,&flag, x, y, COUNT);
			AntoSeed(mine, show, &flag, x, y, COUNT);
			displayboard(show, ROW, COL);
			printf("%d\n", flag);
			if (flag == (row * col - count))
			{
				printf("排雷高手居然是你！");
				break;
			}
		}
	}
}

void CountMind(char mine[ROWS][COLS], char show[ROWS][COLS],int* flag, int x, int y)
{
	int i = 0;
	int j = 0;
	int counts = 0;
	for (i = -1; i < 2; i++)
	{
		for (j = -1; j < 2; j++)
		{
			if (mine[x + i][y + j] == '1')
			{
				counts++;
			}
		}
	}
	show[x][y] = counts+'0';
	*flag = *flag + 1;
}

void AntoSeed(char mine[ROWS][COLS], char show[ROWS][COLS], int* flag, int x, int y)
{
	if (show[x][y] == '0')
	{
		int i = 0;
		int j = 0;
		for (i = -1; i < 2; i++)
		{
			for (j = -1; j < 2; j++)
			{
				if (show[x + i][y + j] == '*')
				{
					CountMind(mine, show, flag, x + i, y + j, COUNT);
					AntoSeed(mine, show, flag, x + i, y + j, COUNT);
				}
			}
		}

	}

}
