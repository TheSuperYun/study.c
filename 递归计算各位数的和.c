#include<stdio.h>
int digitsum(int a)
{
	if (a < 10)
	{
		return a;
	}
	else
	{
		return a % 10 + digitsum(a / 10);
	}
}
int main()
{
	int a = 1729;
	printf("%d", digitsum(a));
	return 0;
}