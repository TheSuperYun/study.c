#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int sum = 0;
	for (i = 1; i <= 9; i++)
	{
		for (a = 1; a <= i; a++)
		{
			sum = a * i;
			printf("%d*%d=%-2d ", i, a, sum);
		}
		printf("\n");
	}
	return 0;
}