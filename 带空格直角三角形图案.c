#include<stdio.h>

int main()
{
	int a = 0;
	int i = 0;
	int j = 0;
	scanf_s("%d", &a);
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a - i - 1; j++)
		{
			printf("  ");
		}
		for (j = 0; j < i+1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}