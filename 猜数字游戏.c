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
		printf("�²�����\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}


}
void meau()
{
	printf("*************************\n");
	printf("***����1         ����0***\n");
	printf("**��ʼ��Ϸ      ������Ϸ*\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;


		}
	} while (input);


	return 0;
}