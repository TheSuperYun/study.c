#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float Max = 0;
int J = 0;
float fun(float array[], int n);
int main()
{
	float  a[10], ave;
	int i = 0;
	for (i = 0; i < 10; i++)
		scanf("%f", &a[i]);
	ave = fun(a, 10);
	printf("ave=%.2f\n", ave);
	printf("max=%.02f\n", Max);
	printf("Total:%d\n", J);
	return 0;
}

/* 请在这里填写答案 */
float fun(float array[], int n)
{
	int i = 0, temp = 0;
	float sum = 0;
	J++;
	for (i = 0; i < n; i++)
	{
		sum += array[i];
		if (array[i] > Max)
		{
			temp = Max;
			Max = array[i];
			array[i] = temp;
		}
		if (array[i] == Max)
			J++;
	}
	return sum / n;
}