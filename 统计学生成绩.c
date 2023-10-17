#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char score_s(int arr[],int n,int* score)//77 54 92 73 60 65 69
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= 90)
			score[0] += 1;
		else if (arr[i] >= 80)
			score[1] += 1;
		else if (arr[i] >= 70)
			score[2] += 1;
		else if (arr[i] >= 60)
			score[3] += 1;
		else if (arr[i] < 60)
			score[4] += 1;
	}
}
int main()
{
	int n = 0, i = 0;
	int arr[1000] = { 0 };
	int score[5] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);		
	}
	score_s(arr, n, score);
	for (i = 0; i <5 ; i++)
	{
		printf("%d ", score[i]);
	}
	return 0;
}