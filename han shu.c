#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "c���Գ������",55 };
	strcpy(b1.name,"C++");
	/*struct Book* pb = &b1;
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);*/
	printf("������%s\n", b1.name);
	/*printf("�۸�%dԪ\n",b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ",b1.price);*/
	return 0;
}