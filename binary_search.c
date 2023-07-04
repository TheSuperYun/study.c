#include<stdio.h>

int binary_search(int arr[1],int sz, int k)
{
	
	int right = sz - 1;
	int left = 0;
	
	while (left<=right)
	{
 		int mid = (right + left) / 2;
		if (arr[mid] > k)
		{
    		right=mid-1;
		}
		else if (arr[mid] < k)
		{
			left=mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,sz, k);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}


	return 0;
}