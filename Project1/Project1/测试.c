/*链表测试
增
删
查
改
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

//创建节点结构体
struct Node
{
	int a;
	struct Node* pNext;
};

//设置头尾指针
struct Node* pHead = NULL;
struct Node* pEnd = NULL;

//创建第一个节点
struct Node* CreatList(int a)
{
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	//赋初始值
	pTemp->a = a;
	pTemp->pNext = NULL;

	//判断链表是否为NULL
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
	return pHead;//返回头指针
}

//遍历链表
void ScanList(void)
{
	struct Node* ptemp = pHead;
	while (ptemp)
	{
		printf("%d	", ptemp->a);
		ptemp = ptemp->pNext;
		return;
	}

	printf("链表为空！");
	return;
}

//查找链表指定位置的元素

struct Node* Find(int Index)
{
	struct Node* pTemp = pHead;
	//遍历查找第Index位置的节点
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

//指定节点后插入元素
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
		printf("找不到该节点！");
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

//删除指定节点
void DeleteListNode(int Index)
{
	struct Node* ptemp = Find(Index-1);
	struct Node* p = ptemp->pNext;
	ptemp->pNext = ptemp->pNext->pNext;
	free(p);
}

//删除整表
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
	//遍历链表
	ScanList();
	printf("\n");
	//指定结点修改为指定值(查找指定节点元素)
	struct Node*pt=Find(5);
	pt->a = 199;
	//再次遍历链表
	ScanList();

	//指定结点后插入新结点
	Insert(6, 35);
	printf("\n");

	//再次遍历链表
	ScanList();
	printf("\n");

	//删除指定结点
	DeleteListNode(3);
	
	//再次遍历链表
	ScanList();
	printf("\n");

	//删除整表
	DeleteList(pHead);
	ScanList();
	printf("\n");

	system("pause");
	return 0;
}