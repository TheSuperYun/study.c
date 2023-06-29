#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	while (1)
	{
		printf("猜猜数字\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}


}
void meau()
{
	printf("*************************\n");
	printf("***输入1         输入0***\n");
	printf("**开始游戏      结束游戏*\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("请选择\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;


		}
	} while (input);


	return 0;
}