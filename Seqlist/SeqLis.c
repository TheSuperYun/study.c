#include "SeqList.h"
void SeqListInit(SL* ps)
{
	ps->a = (SQDataType*)malloc(sizeof(SQDataType) * 4);
	ps->capacity = 4;
	ps->size = 0;
}
void SeqlistCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		SQDataType* temp = (SQDataType*)realloc(ps->a, (ps->capacity) * 2*sizeof(SQDataType));
		if (temp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = temp;
		ps->capacity *= 2;
	}
}
void SeqListPushBack(SL* ps,SQDataType x)
{
	SeqlistCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SL* ps,SQDataType x)
{
	int end = ps->size-1;
	SeqlistCapacity(ps);
	while (end>=0)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int end = 0;
	while (end<ps->size)
	{
		ps->a[end] = ps->a[end + 1];
		end++;
	}
	ps->size--;
}
void SeqListInsert(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	SeqlistCapacity(ps);
	int end = ps->size-1;
	while (end>=pos)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SL* ps, int pos)
{
	assert(pos < ps->size);
	SeqlistCapacity(ps);
	int end = pos;
	while (end<ps->size)
	{
		ps->a[end] = ps->a[end + 1];
		end++;
	}
	ps->size--;
}
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqlistDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
int SeqListFind(SL* ps, SQDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListModiry(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;
}