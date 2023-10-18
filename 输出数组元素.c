#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0, row = 0, count = 0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	if ((n - 1) % 3 == 0)
		row = (n - 1) / 3;
	else
		row = ((n - 1) / 3) + 1;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (count < n - 2)
			{
				printf("%d ", (arr[count + 1] - arr[count]));
				count++;
			}
		}
		if (count < n - 1)
		{
			printf("%d", (arr[count + 1] - arr[count]));
			count++;
		}
		printf("\n");

	}
	return 0;
}