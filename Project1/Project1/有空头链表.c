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
//	//����һ���ڵ�
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	//�ڵ��Ա��ֵ
//	pTemp->a = a;
//	pTemp->pNext = NULL;
//
//}
//
//void AddListTail(int a)
//{
//	struct Node*pTemp=CreatNode(a);
//	//β���
//	g_pEnd->pNext = pTemp;
//	g_pEnd = pTemp;
//}
//
//
////ͷ���
//void AddListHead(int a)
//{
//	struct Node* pTemp = CreatNode(a);
//	//����
//	pTemp->pNext = g_pHead->pNext;
//	g_pHead->pNext = pTemp;
//}
//
//void InitListHead(void)
//{
//	//�����ͷ��ʼ��
//	g_pHead = (struct Node*)malloc(sizeof(struct Node));
//	g_pHead->pNext = NULL;
//	g_pEnd = g_pHead;
//}
//
////��������
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
////��������λ�ýڵ�
//struct Node* SelectNode(int index)
//{
//	struct Node* pTemp = g_pHead;
//	for (int i = 1; i < index; i++)
//	{
//		pTemp = pTemp->pNext;
//		if (pTemp == NULL)
//		{
//			printf("�޴˽ڵ㣡\n");
//			return NULL;
//		}
//	}
//
//	return pTemp;
//}
//
////����λ����ӽڵ�
//void AddNodeToAbitrayarea(int index, int a)
//{
//	struct Node* pTemp = g_pHead->pNext;
//	if (pTemp->pNext == NULL)
//	{
//		printf("�޽ڵ㣡");
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
//	//��������
//	ScanList();
//
//	//����λ����ӽڵ�
//	
//	AddNodeToAbitrayarea(7, 99);
//	ScanList();
//
//	system("pause");
//	return 0;
//}