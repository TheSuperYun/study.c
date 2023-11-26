#pragma once
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTDataType;
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};
typedef struct SListNode SLTNode;
void SListPrint(SLTNode* phead);
SLTNode* BuySListNode(SLTDataType x);
void SListPushBack(SLTNode** phead, SLTDataType x);
void SListPushFront(SLTNode** phead, SLTDataType x);
void SListPopBack(SLTNode** phead);
void SListPopFront(SLTNode** phead);
SLTNode* SListFind(SLTNode* phead,SLTDataType x);
void SListInsert(SLTNode** phead,SLTNode* pos,SLTDataType x);
void SListErase(SLTNode** phead,SLTNode* pos);