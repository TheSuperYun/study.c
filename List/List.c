#include "List.h"
void ListTest()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPushBack(plist, 6);
	ListPrint(plist);
	ListPrint(reverseList(plist));

	
}
ListNode* reverseList(ListNode* phead)
{
	ListNode* tall = phead->nest;
	while (tall != phead)
	{
		ListNode* temp = tall->nest;
		tall->nest = tall->prev;
		tall->prev = temp;
		tall = temp;
	}
	ListNode* temp = tall->nest;
	tall->nest = tall->prev;
	tall->prev = temp;
}
void main()
{
	ListTest();
}