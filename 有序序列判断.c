#include<stdio.h>
int panduan(int arr[], int n)
{
	int a = 0, b = 1;
	while (arr[a] == arr[b])
	{
		a++;
		b++;
	}
	if (arr[a] >= arr[b])
	{			
		int i = 0;
		for (i = 0; i < n - a - 2; i++)
		{
			if (arr[++a] < arr[++b])
				return 0;
		}
	}
	else if (arr[a] <= arr[b])
	{
		int i = 0;
		for (i = 0; i < n - a - 2; i++)
		{
			if (arr[++a] > arr[++b])
				return 0;
		}
	}
	return 1;
}
int main()
{
	int arr[50] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int a = panduan(arr, n);
	if (a == 1)
	{
		printf("ÓĞĞò");
	}
	if (a = 0)
	{
		printf("ÎŞĞò");
	}
	return 0;
}
