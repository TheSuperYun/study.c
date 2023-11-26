#include "SList.h";
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode != NULL);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur!=NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SListPushBack(SLTNode** phead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	SLTNode** tall = phead;
	if (*tall == NULL)
	{
		(*tall) = newnode;
	}
	else
	{
		SLTNode* temp = *tall;
		while (temp->next != NULL)
			{
			temp = temp->next;
			}
		temp->next = newnode;
	}	
}
void SListPushFront(SLTNode** phead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *phead;
		*phead = newnode;
	}
	
}
void SListPopBack(SLTNode** phead)
{
	assert(*phead != NULL);
	SLTNode* tall = *phead;
	if (tall->next == NULL)
	{
		free(tall);
		*phead = NULL;
	}
	else
	{
		while ((tall->next)->next != NULL)
		{
			tall = tall->next;
		}
		free(tall->next);
		tall->next = NULL;
	}
}
void SListPopFront(SLTNode** phead)
{
	assert(*phead != NULL);
	SLTNode* tall = (*phead)->next;
	free(*phead);
	*phead = tall;
}
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	assert(phead != NULL);
	SLTNode* tall = phead;
	if (tall->next == NULL)
	{
		if (tall->data == x)
		{
			return tall;
		}
		return NULL;
	}
	while (tall->next != NULL)
	{
		if (tall->data == x)
		{
			return tall;
		}
		tall = tall->next;
	}
	if (tall->data == x)
		return tall;
	return NULL;
}
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDataType x)
{
	assert(*phead != NULL);
	SLTNode* newnode = BuySListNode(x);
	SLTNode* tall = *phead;
	if (tall == pos)
	{
		*phead = newnode;
		newnode->next = pos;
	}
	else
	{
		while (tall->next != pos)
		{
			tall = tall->next;
		}
		tall->next = newnode;
		newnode->next = pos;
	}
}
void SListErase(SLTNode** phead, SLTNode* pos)
{
	assert(*phead != NULL);
	SLTNode* tall = *phead;
	if (tall == pos)
	{
		SListPopFront(phead);
	}
	else
	{
		while (tall->next != pos)
		{
			tall = tall->next;
		}
		tall->next = pos->next;
		free(pos);
	}
	

}