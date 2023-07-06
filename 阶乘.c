#include<stdio.h>
int jie(int n )
{
	
	if (n != 0)
	{
		return n * jie(n - 1);
	}
	else
		return 1;
}
int main()
{
	
	int n = 0;
	scanf_s("%d", &n);
	printf("%d", jie(n));//jie=½×³Ë
	
	return 0;
}