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
	printf("-------------ɨ����Ϸ---------------\n");
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
	printf("-------------ɨ����Ϸ---------------\n");
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
		printf("������Ҫ�Ų������\n");
		scanf_s("%d%d", &x, &y);
		if (show[x][y] != '*')
		{
			printf("��λ���Ѿ��Ų����\n");
		}
		else
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					win++;
					//DisplayBoard(mine, ROW, COL);
					int count = get_mine_count(mine, show, x, y);
					printf("%d\n", count);
					show[x][y] = count + '0';//ת��Ϊ�����ַ�
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("���������Ƿ�������������\n");
			}
		}
		
	}

	if (win == ROW * COL - EASY_COUNT)
	{
		printf("��ϲ�㣬��Ӯ��\n");
		DisplayBoard(mine, ROW, COL);
	}
}