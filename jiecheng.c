#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	printf("����%d", day);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0; int n = 0;
//	scanf("%d", &n);
	//i = n;
	//n--;
	//for (;n!=0;n--)
	//{
	//	
	//	i = i * n;
	//}
//	printf("%d", i);
//	return 0;
//}
int main()
	{
	int i = 0; int n = 1; long int s = 0; long int m = 1; int jieshu = 0;
	scanf("%d", &jieshu);
	for (i = 1; i <= jieshu; i++)
	{

		n = i;
		m = 1;
		for (; n != 0; n--)
		{

			m = m * n;
			printf("%d ", m);
		}
		s = s + m;
		printf("%d\n", s);
	}
	printf("%d", s);

		return 0;
	}
