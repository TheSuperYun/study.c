#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 0, gewei = 0, sum = 0;
	scanf("%d", &num);
	int i = 1, n = 0;
	while (num!=0)
	{
		gewei = num % 10;
		sum += gewei;
		num /= 10;
		n++;
	}
	printf("%d %d", n, sum);
	return 0;
}