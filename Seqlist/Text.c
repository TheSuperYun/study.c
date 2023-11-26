#include "SeqList.h"
void TestSeqList1()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushBack(ps, 1);
	SeqListPushBack(ps, 2);
	SeqListPushBack(ps, 3);
	SeqListPushBack(ps, 4);
	SeqListModiry(ps, 4, 8);
	SeqListPrint(ps);
}
int main()
{
	
	TestSeqList1();

	return 0;
}
