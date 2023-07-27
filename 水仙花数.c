#include<stdio.h>
int chengfang(int x,int y)
{
	int i = 0;
	for (i = 0; i < y-1; i++)
	{
		x *= x;
	}
	return x;
}
void lily(int x)
{
	int n = 0;
	int a = 0, b = 0, c = 0;
	for (n = 1; n < 5; n++)
	{	
		a = x / chengfang(10,n);
		b = x % chengfang(10,n);
		c += a * b;	
	}
	if (c == x)
		printf("%d\n", x);
}
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		lily(i);
	}
	return 0;
}