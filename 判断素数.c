#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int M = 0, N = 0, i = 1, count = 0, sum = 0, flag = 0;
	scanf("%d %d", &M, &N);
	while (M <= N)
	{
		flag = 0;
		for (i = 2; i < M; i++)
		{
			if (M % i == 0)
			{
				flag = 1;
				break;
			}	
		}
		if (flag == 0)
		{
			count++;
			sum += M;
		}
		M++;
	}
	printf("%d %d", count, sum);
	return 0;
}