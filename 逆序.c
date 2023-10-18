#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0, i = 0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	while (i < n)
	{
		scanf("%d", &arr[i++]);
	}
	for (i = n-1; i > 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("%d", arr[0]);
	return 0;
}