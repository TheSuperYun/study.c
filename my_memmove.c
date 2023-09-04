#include<stdio.h>
void* my_memmove(void* dest, const void* src,size_t num)
{
	if (src < dest)
	{
		dest = (char*)dest + num-1;
		src = (char*)src + num-1;
		while (num)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest -1;
			src = (char*)src - 1;
			num--;
		}
	}
	else if (src >  dest)
	{
		while (num)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
			num--;
		}
	}
	return 0;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 , arr1+2, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}