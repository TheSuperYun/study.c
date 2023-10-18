#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0, i = 0, temp = 0;
	int even = 0, odd = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	while (scanf("%d", &temp) == 1)
	{
		arr[i++] = temp;
		if (i == n)
			break;
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("%d %d", odd, even);
	return 0;
}
