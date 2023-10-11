#include <stdio.h>
int* wanshu(int x ,int* p)
{
	int i = 1, n = 0;
	while (i!=x)
	{	
		if (x % i == 0)
		{
			*(p + n) = i;
			n++;
		}		
		i++;
	}
	int j = 0, sum = 0;
	for (j = 0; j < n; j++)
	{
		sum += p[j];
	}
	p[n] = 0;
	if (sum == x)
	{
		return p;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	int m = 0, n = 0, cishu = 0;
	scanf_s("%d %d", &m, &n);//6 = 1 + 2 + 3
	if (m < 0 || n < 0)
		return 0;
	while (m<=n)
	{
		int arr[100] = { 0 };
		int i = 0;
		if (wanshu(m, arr) != NULL)
		{
			printf("%d = 1", m);
			i++;
			while (arr[i]!=0)
			{
				printf(" + %d", arr[i]);
				i++;
			}
			printf("\n");
			cishu++;
		}
		m++;
	}
	if (cishu == 0)
	{
		printf("None");
	}
	return 0;
}