/*�������
��
ɾ
��
��
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

//�����ڵ�ṹ��
struct Node
{
	int a;
	struct Node* pNext;
};

//����ͷβָ��
struct Node* pHead = NULL;
struct Node* pEnd = NULL;

//������һ���ڵ�
struct Node* CreatList(int a)
{
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	//����ʼֵ
	pTemp->a = a;
	pTemp->pNext = NULL;

	//�ж������Ƿ�ΪNULL
	if (pHead == NULL || pEnd == NULL)
	{
		pHead = pTemp;
		pEnd = pTemp;
	}
	else
	{
		pEnd->pNext = pTemp;
		pEnd = pTemp;
	}
	return pHead;//����ͷָ��
}

//��������
void ScanList(void)
{
	struct Node* ptemp = pHead;
	while (ptemp)
	{
		printf("%d	", ptemp->a);
		ptemp = ptemp->pNext;
		return;
	}

	printf("����Ϊ�գ�");
	return;
}

//��������ָ��λ�õ�Ԫ��

struct Node* Find(int Index)
{
	struct Node* pTemp = pHead;
	//�������ҵ�Indexλ�õĽڵ�
	for (int i = Index-1; i > 0; i--)
	{
		if (pTemp == NULL)return NULL;
		else
		{		
			pTemp = pTemp->pNext;
		}
	}
	return pTemp;
}

//ָ���ڵ�����Ԫ��
void Insert(int Index,int a)
{
	struct Node* pTemp;
	if (Index == 0)
	{
		pTemp = pHead;
		struct Node* p = (struct Node*)malloc(sizeof(struct Node));
		p->pNext = pHead->pNext;
		pHead->pNext = p;
		p->a = a;
		return;
	}
	else pTemp= Find(Index);
	if (pTemp == NULL)
	{
		printf("�Ҳ����ýڵ㣡");
		return;
	}
	else
	{
		struct Node* p = (struct Node*)malloc(sizeof(struct Node));
		p->a = a;
		p->pNext = pTemp->pNext;
		pTemp->pNext = p;
		return;
	}
}

//ɾ��ָ���ڵ�
void DeleteListNode(int Index)
{
	struct Node* ptemp = Find(Index-1);
	struct Node* p = ptemp->pNext;
	ptemp->pNext = ptemp->pNext->pNext;
	free(p);
}

//ɾ������
void DeleteList(struct Node* p)
{
	struct Node* ptemp = p;
	while (ptemp)
	{
		struct Node* pt = ptemp;
		ptemp = ptemp->pNext;
		free(pt);
	}
	pHead = NULL;
	return;
}

int main(void)
{
	int a[2][3] = { {1,2,3},{4,5,6} };

	struct Node* p;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			p=CreatList(a[i][j]);
		}
	}
	//��������
	ScanList();
	printf("\n");
	//ָ������޸�Ϊָ��ֵ(����ָ���ڵ�Ԫ��)
	struct Node*pt=Find(5);
	pt->a = 199;
	//�ٴα�������
	ScanList();

	//ָ����������½��
	Insert(6, 35);
	printf("\n");

	//�ٴα�������
	ScanList();
	printf("\n");

	//ɾ��ָ�����
	DeleteListNode(3);
	
	//�ٴα�������
	ScanList();
	printf("\n");

	//ɾ������
	DeleteList(pHead);
	ScanList();
	printf("\n");

	system("pause");
	return 0;
}