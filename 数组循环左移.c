#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse(int* ps,int x)
{
	int left = 0;
	int right = x;
	int temp = 0;
	while (left<right)
	{
		temp = *(ps + left);
		*(ps + left) = *(ps + right);
		*(ps + right) = temp;
		left++;
		right--;
	}
}
int main()
{
	int n = 0, m = 0;
	int arr[100] = {0};
	scanf("%d %d", &n, &m);
	int i = 0;
	if (m >= n)
	{
		m %= n;
	}
 	while (scanf("%d", &arr[i]) == 1 )
	{
		
		i++;
		if (i == n)
		{
			break;
		}
	}
	reverse(&arr[m], n - m - 1);
	reverse(arr, m - 1);
	reverse(&arr[0], n - 1);
	int j = 0;
	if (n != 0)
	{
		for (j = 0; j < n - 1; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("%d", arr[j]);
	}
	return 0;
}