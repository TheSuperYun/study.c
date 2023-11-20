#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int x = 0, y = 0;
	int arr[100] = { 0 };
	int i = 0, size = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d %d", &x, &y);

	for(i = 0; i < n; i++)
	{
		if (arr[i] < x || arr[i] > y)
		{
			arr[size] = arr[i];
			size++;
		}
	}
	int j = 0;
	for ( j = 0; j < size-1; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("%d", arr[j]);
	return 0;

}