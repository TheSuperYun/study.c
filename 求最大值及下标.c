#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, i = 1, max = 0, temp = 0, num = 0;
	scanf("%d", &n);
	while (i <= n)
	{
		scanf("%d", &temp);
		if (max < temp)
		{
			max = temp;
			num = i;
		}
		i++;
	}
	printf("%d %d ", max, num-1);
	return 0;
}