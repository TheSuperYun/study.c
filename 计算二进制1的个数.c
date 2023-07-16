#include<stdio.h>

int main()
{
	int a = 15;
	int count = 0;

	while (a!=0)
	{
		if ((a & 1) == 1)
		{
			count++;
		}
		a = a >> 1;

	}
	printf("%d", count);
	return 0;
}