#include "List.h"
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	assert(newnode != NULL);
	newnode->data = x;
	newnode->prev = NULL;
	newnode->nest = NULL;
	return newnode;
}
ListNode* ListInit()
{
	 ListNode* phead = BuyListNode(0);
	 phead->nest = phead;
	 phead->prev = phead;
	 return phead;
}
void ListDestory(ListNode* phead)
{
	assert(phead);
	ListNode* next = phead->nest;
	while (next != phead)
	{
		ListNode* tall = next->nest;
		free(next);
		next = tall;
	}
	free(phead);
	phead = NULL;
}
void ListPrint(ListNode* phead)
{
	ListNode* tall = phead->nest;
	while (tall != phead)
	{
		printf("%d->", tall->data);
		tall = tall->nest;
	}
	printf("NULL\n");
}
void ListPushBack(ListNode* phead, LTDataType x)
{
	ListNode* tall = phead->prev;
	ListNode* newnode = BuyListNode(x);
	tall->nest = newnode;
	newnode->prev = tall;
	newnode->nest = phead;
	phead->prev = newnode;
}
void ListPushFront(ListNode* phead, LTDataType x)
{
	ListNode* first = phead->nest;
	ListNode* newnode = BuyListNode(x);
	first->prev = newnode;
	newnode->nest = first;
	newnode->prev = phead;
	phead->nest = newnode;
}
void ListPopBack(ListNode* phead)
{
	ListNode* tall = phead->prev;
	assert(tall != phead);
	phead->prev = tall->prev;
	(tall->prev)->nest = phead;
	free(tall);
}
void ListPopFront(ListNode* phead)
{
	ListNode* tall = phead->nest;
	assert(tall != phead);
	phead->nest = tall->nest;
	tall->prev = phead;
	free(tall);
}
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tall = phead->nest;
	while (tall != phead)
	{
		if (tall->data == x)
		{
			return tall;
		}
		tall = tall->nest;
	}
	return NULL;
}
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* newnode = BuyListNode(x);
	ListNode* first = pos->prev;
	first->nest = newnode;
	newnode->prev = first;
	newnode->nest = pos;
	pos->prev = newnode;

}
void ListErase(ListNode* pos)
{
	ListNode* first = pos->prev;
	ListNode* tall = pos->nest;
	first->nest = tall;
	tall->prev = first;
	free(pos);
}