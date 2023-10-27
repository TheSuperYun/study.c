#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	char arr[100] = { 0 };
	scanf("%s", arr);
	while (arr[i] != '\0')
	{
		if (arr[i] == 'a')
		{
			int j = i;
			while (arr[j] != '\0')
			{
				arr[j] = arr[j + 1];
				j++;
			}
		}
		else
			i++;
	}
	printf("%s", arr);
	return 0;
}