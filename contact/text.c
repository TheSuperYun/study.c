#include "contact.h"
#define _CRT_SECURE_NO_WARNINGS 1
void menu()
{
	printf("**************************************\n");
	printf("********1.add      2.del     *********\n");
	printf("********3.search   4.modify  *********\n");
	printf("********5.show     6.sort    *********\n");
	printf("********0.exit               *********\n");
	printf("**************************************\n");
}
int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("�˳�ͨ��¼\n");
			break;
		default:
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}