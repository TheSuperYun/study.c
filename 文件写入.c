#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	struct S
	{
		int age;
		char arr[10];
		float score;
	};
	struct M
	{
		char arr[10];
		int age;
		float score;
	};
	struct S s = { 12, "zhangsan",60.0 };
	struct M m = { 0 };
	char but[100] = { 0 };
	sprintf(but, "%d %s %.2f", s.age, s.arr, s.score);
	printf("%s\n", but);
	sscanf(but, "%d %s %f", &(m.age), m.arr, &(m.score));
	printf("%d %s %f", m.age, m.arr, m.score);
}