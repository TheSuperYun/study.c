#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0, min = 0, max = 0, min1 = 0, max1 = 0;
	float sum = 0;
	int arr[7] = { 0 };
	while (scanf("%d", &arr[i])==1)
	{
		i++;
		if (i == 7)
			break;
	}
	min = arr[0];
	for (i = 1; i < 7; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min1 = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			max1 = i;
		}
	}
	arr[max1] = 0;
	arr[min1] = 0;
	for (i = 0; i < 7; i++)
	{
		sum += arr[i];
	}
	sum /= 5;
	printf("%d", sum);
	//for (i = 0; i < 7; i++)
	//{
	//	printf("%d", arr[i]);
	//}
	return 0;
}