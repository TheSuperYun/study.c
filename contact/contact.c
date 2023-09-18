#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
int  InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->date = (Contact*)calloc(3, sizeof(PeoInfo));
	if (pc->date == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	pc->capacity = 3;
	return 0;
}
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->date, sizeof(PeoInfo) * (pc->capacity + 2));
		if (ptr == NULL)
		{
			printf("%s", strerror(errno));
		}
		else
		{
			pc->date = ptr;
			pc->capacity += 2;
			printf("增容成功\n");
		}
	}
	
	printf("请输入名字");
	scanf("%s", pc->date[pc->count].name);
	printf("请输入年龄");
	scanf("%d", &(pc->date[pc->count].age));
	printf("请输入性别");
	scanf("%s", pc->date[pc->count].sex);
	printf("请输入电话号码");
	scanf("%s", pc->date[pc->count].tele);
	printf("请输入地址");
	scanf("%s", pc->date[pc->count].addr);
	pc->count++;
	return;
}
void ShowContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\t\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t", pc->date[i].name);
		printf("%3d\t", pc->date[i].age);
		printf("%5s\t", pc->date[i].sex);
		printf("%12s\t", pc->date[i].tele);
		printf("%30s\t\n", pc->date[i].addr);
	}
}
int FindByname(Contact* pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->date[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("请输入要删除的名字");
	scanf("%s",name);
	int ret = 0;
	ret=FindByname(pc, name);
	if (ret == -1)
	{
		printf("要删除的名字不存在");
		return;
	}
	int i = 0;
	for (i = ret; i < pc->count-1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}
void SearchContact(Contact* pc)
{
	assert(pc);
	int name[20] = { 0 };
	printf("请输入一个名字");
	scanf("%s", name);
	int ret = 0;
	ret = FindByname(pc, name);
	if (ret == -1)
	{
		printf("名字不存在\n");
		return;
	}
	else
	{
		printf("找到了\n");
		int i = 0;
		printf("%20s\t%5s\t%5s\t%12s\t%30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < pc->count; i++)
		{
			printf("%20s\t", pc->date[i].name);
			printf("%3d\t", pc->date[i].age);
			printf("%5s\t", pc->date[i].sex);
			printf("%12s\t", pc->date[i].tele);
			printf("%30s\t\n", pc->date[i].addr);
		}
	}
}
void ModifyContact(Contact* pc)
{
	char name[20] = { 0 };
	assert(pc);
	printf("请输入要需改的名字");
	scanf("%s", name);
	int ret = FindByname(pc, name);
	if (ret == -1)
	{
		printf("名字不存在\n");
		return;
	}
	else
	{
		printf("请输入名字");
		scanf("%s", pc->date[ret].name);
		printf("请输入年龄");
		scanf("%d", &(pc->date[ret].age));
		printf("请输入性别");
		scanf("%s", pc->date[ret].sex);
		printf("请输入电话号码");
		scanf("%s", pc->date[ret].tele);
		printf("请输入地址");
		scanf("%s", pc->date[ret].addr);
	}
}
void SortContact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < pc->count-1; j++)
	{
		for (i = 0; i < pc->count-1-j; i++)
		{			
			if (strcmp(pc->date[i].name, pc->date[i + 1].name) >0)
			{
				PeoInfo a;
				InitContact(&a);
				PeoInfo* temp = &a;
				memmove(temp, (pc->date)+i+1, sizeof(PeoInfo));
				memmove((pc->date)+i+1, (pc->date) + i, sizeof(PeoInfo));
				memmove((pc->date) + i, temp, sizeof(PeoInfo));
			}
		}
	}
}