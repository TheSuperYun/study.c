#include<stdio.h>
int feibo(int n)
{
	int i = 0;
	int a1 = 1;
	int a2 = 1;
	int a3 = 2;
	if (n >= 3)
	{
		for (i = 3; i <= n; i++)
		{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
		}
		return a3;
	}
	else
		return 1;
}
int main()
{
	int i = 0;
	int n = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", feibo(i));
	}
	
	return 0;
}