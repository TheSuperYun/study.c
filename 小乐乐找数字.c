#include<stdio.h>
#include<math.h>
int gaibian(int a)
{
	int i = 0;
	int sum = 0;
	while (a != 0)
	{		
		if (a % 2 == 1)
		{
			sum += 1 * pow(10, i);
			a /= 10;
			i++;
		}
		else if(a % 2 == 0)
		{
			a /= 10;
			i++;
		}
	}	
	return sum;
}
int main()
{
	int a = 22222;
	//scanf_s("%d", &a);
	int s = gaibian(a);
	printf("%d", s);
	return 0;
}