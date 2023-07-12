#include<stdio.h>
int cifang(int n,int k)
{
	
	if (k > 1)
	{
		return cifang(n, k-1) * n;
		
	}
	else
	{
		return n;
	}

}
int main()
{
	int n = 2;
	int k = 3;
	printf("%d", cifang(n, k));
	return 0;
}