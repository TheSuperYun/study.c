#include<stdio.h>

int main()
{
	int arr[4] = { 1,1,1,1 };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		arr[i] = 0;
		if (((arr[0] == 1) + (arr[2] == 0) + (arr[3] == 0) + (arr[3] == 1)) == 3)
		{
			printf("%d", i+1);
		}
		arr[i] = 1;
	}
	return 0;
}