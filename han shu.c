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
	struct Book b1 = { "c语言程序设计",55 };
	strcpy(b1.name,"C++");
	/*struct Book* pb = &b1;
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);*/
	printf("书名：%s\n", b1.name);
	/*printf("价格：%d元\n",b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元",b1.price);*/
	return 0;
}