#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------扫雷游戏---------------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------扫雷游戏---------------\n");
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count=EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}
int get_mine_count(char mine[ROWS][COLS],char show [ROWS][COLS], int x, int y)
{
	int a = 0;
	int i = 0;
	int j = 0;
	int count = 0;
		for (i = -1; i <= 1; i++)
		{
			x = x + i;
			for (j = -1; j <= 1; j++)
			{
				y = y + j;
				if (mine[x][y] == '1')
				{
					count++;
				}				
				y = y - j;
			}
			x = x - i;
		}
		return count;
}
void FindMine(char mine[ROWS][COLS],char show [ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL-EASY_COUNT)
	{
		printf("请输入要排查的坐标\n");
		scanf_s("%d%d", &x, &y);
		if (show[x][y] != '*')
		{
			printf("该位置已经排查过了\n");
		}
		else
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					win++;
					//DisplayBoard(mine, ROW, COL);
					int count = get_mine_count(mine, show, x, y);
					printf("%d\n", count);
					show[x][y] = count + '0';//转化为数字字符
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("输入的坐标非法，请重新输入\n");
			}
		}
		
	}

	if (win == ROW * COL - EASY_COUNT)
	{
		printf("恭喜你，你赢了\n");
		DisplayBoard(mine, ROW, COL);
	}
}