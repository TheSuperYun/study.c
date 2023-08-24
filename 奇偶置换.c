#include<stdio.h>
void daozhi(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left<right)
	{
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		if (left >= right)
			continue;
		else
		{
			int temp = 0;
			temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
			left++;
			right--;
		}
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr) / sizeof(arr[0]);
	daozhi(arr, len);
	int i = 0;
	int s = 5;
	
	for (i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}