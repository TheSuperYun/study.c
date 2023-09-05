#include<stdio.h>
#include<string.h>
void left_rotate(char arr[], int k)
{
	int a = strlen(arr);
	int i = 0;
	for (i = 0; i < a - k; i++)
	{
		int temp = 0;
		temp = arr[i];
		arr[i] = arr[i + k];
		arr[i + k] = temp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf_s("%d", &k);
	left_rotate(arr, k);
	printf("%s", arr);
	return 0;
}