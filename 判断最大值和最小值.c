#include<stdio.h>

int main()
{
	int n = 0, i = 0;
	int arr[50] = { 0 };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("max=%d min=%d", max, min);
	return 0;
}