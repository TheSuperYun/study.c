#include<stdio.h>

int main()
{
	int r = 0, x = 0, y = 0;
	printf("������Բ�İ뾶\n");
	scanf_s("%d", &r);
	for (y = 0; y <= 2 * r; y++)
	{
		for (x = 0; x <= 2 * r; x++)
		{
			
			if ((((x - r) * (x - r)) + ((y - r) * (y - r))) <= (r * r))
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}