#include "SList.h";
SLTNode* reverse(SLTNode* phead);
SLTNode* reverse_1(SLTNode* phead);
SLTNode* middle(SLTNode* phead);
SLTNode* combined(SLTNode** phead1, SLTNode** phead2);
void TestSList1()
{

	SLTNode* plist = NULL;
	SLTNode* plist1 = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist,5);
	SListPushBack(&plist, 6);
	SListPushBack(&plist,7);
	SListPushBack(&plist,8);
	SListPrint(plist);
	SListPushBack(&plist1, 1);
	SListPushBack(&plist1, 2);
	SListPushBack(&plist1, 3);
	SListPushBack(&plist1, 4);
	SListPushBack(&plist1, 4);
	SListPrint(combined(plist, plist1));
	SListPrint(plist);
	SListPrint(plist1);
}
SLTNode* combined(SLTNode* phead1, SLTNode* phead2)
{
	SLTNode* list1 = phead1;
	SLTNode* list2 = phead2;
	SLTNode* newnode = NULL;
	if (list1->data >= list2->data)
	{
		newnode = list1;
		list1 = list1->next;
	}
	else
	{
		newnode = list2;
		list2 = list2->next;
	}
	SLTNode* head = newnode;
	while (list1 != NULL && list2 != NULL)
	{
		if (list1->data <= list2->data)
		{
			newnode->next = list1;
			newnode = list1;
			list1 = list1->next;		
		}
		else
		{
			newnode->next = list2;
			newnode = list2;
			list2 = list2->next;
		}
	}
	if (list1 == NULL)
	{
		newnode->next = list2;
	}
	else
	{
		newnode->next = list1;
	}
	return head;
}
SLTNode* middle(SLTNode* phead)
{
	SLTNode* slow = phead;
	SLTNode* fast = phead;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
SLTNode* reverse_1(SLTNode* phead)
{
	SLTNode* cur = NULL;
	SLTNode* next = phead->next;
	while (next != NULL)
	{
		phead->next = cur;
		cur = phead;
		phead = next;
		next = next->next;
	}
	phead->next = cur;
	return phead;
}
SLTNode* reverse(SLTNode* phead)
{
	assert(phead != NULL);
	SLTNode* tall = phead->next;
	if (tall == NULL)
	{
		return phead;
	}
	SLTNode* next = tall->next;
	if (next == NULL)
	{
		tall->next = phead;
		phead->next = NULL;
		return tall;
	}
	phead->next = NULL;
	while (next != NULL)
	{
		tall->next = phead;
		phead = tall;
		tall = next;
		next = next->next;
	}
	tall->next = phead;
	return tall;
}

int main()
{
	TestSList1();
	return 0;
}