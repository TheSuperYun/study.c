#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 5;
	int i = 0;
	int j = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > n)
		{
			continue;
		}
		for (j = i+1; j < 10; j++)
		{
			if (arr[i] +arr[j]==n)
			{
				printf("ур╣╫ак");
				printf("(%d,%d)", i, j);
			}
			
		}
		
	}
	return 0;
}