#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_SIZE 100
typedef int SQDataType;
typedef struct SeqlList
{
	SQDataType* a;
	int size;
	int capacity;
}SL;
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps,SQDataType x);
void SeqListPushFront(SL* ps,SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
void SeqListPrint(SL* ps);
void SeqlistCapacity(SL* ps);
void SeqlistDestory(SL* ps);
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
int SeqListFind(SL* ps, SQDataType x);
void SeqListModiry(SL* ps, int pos, SQDataType x);


