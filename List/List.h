#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* nest;
	struct ListNode* prev;
	LTDataType data;
}ListNode;
ListNode* ListInit();
void ListDestory(ListNode* phead);
void ListPrint(ListNode* phead);
void ListPushBack(ListNode* phead,LTDataType x);
void ListPushFront(ListNode* phead,LTDataType x);
void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);
ListNode* ListFind(ListNode* phead, LTDataType x);
void ListInsert(ListNode* pos, LTDataType x);
void ListErase(ListNode* pos);
ListNode* reverseList(ListNode* phead);