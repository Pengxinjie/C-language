//#include<stdio.h>
//#include<stdlib.h>
//
////�ڵ�ṹ��
//struct Node
//{
//	int a;
//	struct Node* pNext;
//};
//
////ͷβָ��
//struct Node* g_pHead = NULL;
//struct Node* g_pEnd = NULL;
//
////��������������������һ�����ݣ�β���
//void AddNodeToList(int a)
//{
//	//����һ���ڵ�
//	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
//	//�ڵ����ݽ��и�ֵ
//	pTemp->a = a;
//	pTemp->pNext = NULL;
//
//	//����
//	if (g_pHead == NULL)
//	{
//		//����������ͷҲ��β
//		g_pHead = pTemp;
//		g_pEnd = pTemp;
//	}
//	else
//	{
//		//��Ϊ�գ���β�������
//		g_pEnd->pNext = pTemp;
//		//β��һֱָ�����һ���ڵ�
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