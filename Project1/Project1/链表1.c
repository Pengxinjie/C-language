//#include<stdio.h>
//#include<stdlib.h>
//
////节点结构体
//struct Node
//{
//	int a;
//	struct Node* pNext;
//};
//
////头尾指针
//struct Node* g_pHead = NULL;
//struct Node* g_pEnd = NULL;
//
////创建链表，在链表中增加一个数据：尾添加
//void AddNodeToList(int a)
//{
//	//创建一个节点
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	//节点数据进行赋值
//	pTemp->a = a;
//	pTemp->pNext = NULL;
//
//	//链接
//	if (g_pHead == NULL)
//	{
//		//空链表，既是头也是尾
//		g_pHead = pTemp;
//		g_pEnd = pTemp;
//	}
//	else
//	{
//		//不为空，往尾巴上添加
//		g_pEnd->pNext = pTemp;
//		//尾巴一直指向最后一个节点
//		g_pEnd = pTemp;
//	}
//}
//
//int main(void)
//{
//	g_pHead;
//	
//	AddNodeToList(1);
//	AddNodeToList(2);
//	AddNodeToList(3);
//	AddNodeToList(4);
//
//	system("pause");
//	return 0;
//}