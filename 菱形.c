#include<stdio.h>

int main()
{
	int y = 0, x = 0, n = 0;//x为宽,y为高,n为边长
	printf("请输入菱形的边长\n");
	scanf_s("%d", &n);
	
	for (y = 0; y <= (2*n-1); y++)
	{

		for (x = 0; x <= (2*n-1); x++)
		{
			if ((y + x <= (3 * n - 1)) && (y + x >= n) && (x - y <= n) && (y - x <= n))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}