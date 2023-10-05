#include<stdio.h>

int main()
{
	int n = 0, i = 0, j = 0;
	scanf_s("%d", &n);
	for (j = 0; j < n; j++)
	{
		printf("* ");
	}
	printf("\n");
	for (i = 0; i < n-2; i++)
	{	
		printf("* ");
		for (j = 0; j < n-2; j++)
		{
			printf("  ");
		}
		printf("* \n");
	}
	for (j = 0; j < n; j++)
	{
		printf("* ");
	}
	printf("\n");
	return 0;
}