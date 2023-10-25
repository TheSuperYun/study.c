#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0, n = 0;
	scanf_s("%d", &n);
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n-i; j++)
		{
			printf("  ");
		}
		for (j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf("  ");
		}
		for (j = 0; j < n-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}