#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define string

int main()
{
	int line = 0;
	printf("�������");
	while (line <= 20000)
	{
		line++;
		printf("��ҪŬ���ô���%d\n",line);
	}
	if (line > 20000)
		printf("�õ���offer");
	return 0;
}


