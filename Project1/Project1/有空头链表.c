//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node {
//	int a;
//	struct Node* pNext;
//};
//
//struct Node* g_pHead = NULL;
//struct Node* g_pEnd = NULL;
//
//
//struct Node* CreatNode(int a)
//{
//	//创建一个节点
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	//节点成员赋值
//	pTemp->a = a;
//	pTemp->pNext = NULL;
//
//}
//
//void AddListTail(int a)
//{
//	struct Node*pTemp=CreatNode(a);
//	//尾添加
//	g_pEnd->pNext = pTemp;
//	g_pEnd = pTemp;
//}
//
//
////头添加
//void AddListHead(int a)
//{
//	struct Node* pTemp = CreatNode(a);
//	//链接
//	pTemp->pNext = g_pHead->pNext;
//	g_pHead->pNext = pTemp;
//}
//
//void InitListHead(void)
//{
//	//链表空头初始化
//	g_pHead = (struct Node*)malloc(sizeof(struct Node));
//	g_pHead->pNext = NULL;
//	g_pEnd = g_pHead;
//}
//
////遍历链表
//void ScanList(void)
//{
//	struct Node* p = g_pHead;
//	while (p->pNext != NULL)
//	{
//		printf("%d  ", p->pNext->a);
//		p = p->pNext;
//	}
//	printf("\n");
//}
//
////查找任意位置节点
//struct Node* SelectNode(int index)
//{
//	struct Node* pTemp = g_pHead;
//	for (int i = 1; i < index; i++)
//	{
//		pTemp = pTemp->pNext;
//		if (pTemp == NULL)
//		{
//			printf("无此节点！\n");
//			return NULL;
//		}
//	}
//
//	return pTemp;
//}
//
////任意位置添加节点
//void AddNodeToAbitrayarea(int index, int a)
//{
//	struct Node* pTemp = g_pHead->pNext;
//	if (pTemp->pNext == NULL)
//	{
//		printf("无节点！");
//		return;
//	}
//
//	pTemp = SelectNode(index);
//
//	if (pTemp != NULL)
//	{
//		struct Node* pt = CreatNode(a);
//		pt->pNext = pTemp->pNext;
//		pTemp->pNext = pt;
//	}
//}
//
//int main(void)
//{
//	InitListHead();
//
//	AddListTail(4);
//	AddListTail(4);
//	AddListTail(4);
//	AddListTail(4);
//
//	AddListHead(100);
//
//	//遍历链表
//	ScanList();
//
//	//任意位置添加节点
//	
//	AddNodeToAbitrayarea(7, 99);
//	ScanList();
//
//	system("pause");
//	return 0;
//}