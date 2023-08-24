#include<stdio.h>

int main()
{
	int arr1[5] = { 1,3,8,9,22 };//1,3,7,9,22
	int arr2[6] = { 2,8,10,17,18,19 };//2,8,10,17,33,44
	int i = 0, a = 5, b = 6, left = 0, right = 0;
	/*printf("请输入第一行和第二行的数字");
	scanf_s("%d%d", &a,&b);
	for (i = 0; i < a; i++)
	{
		scanf_s("%d", &arr1);
	}
	for (i = 0; i < b; i++)
	{
		scanf_s("%d", &arr2);
	}*/
	while (left<a||right<b)
	{
		while ((arr1[left]<=arr2[right]&&left<a)||(right==b && left < a))
		{
			printf("%d ", arr1[left]);
			left++;
		}
		while ((arr2[right] <= arr1[left]&&right<b)||(left==a && right < b))
		{
			printf("%d ", arr2[right]);
			right++;
		}
		

	}
	return 0;
}