#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//�����ڵ�ṹ��
struct Node {
	int a;
	struct Node* pNext;
};

//����ͷβָ��
struct Node* pHead=NULL;
struct Node* pEnd=NULL;

//��������
void AddNodeToList(int n)
{
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	pTemp->a = n;
	pTemp->pNext = NULL;

	if (pHead== NULL || pEnd == NULL)//������ͷ��β��
	{
		pHead = pTemp;
		pEnd = pTemp;
	}
	else {//β���
		pEnd->pNext = pTemp;//��pTemp����pEndβ��
		pEnd = pTemp;
	}
	struct Node* bp = pHead;
}

void Scanlist()//��������
{
	struct Node* pTemp = pHead;
	while (pTemp)
	{
		printf("%d\n", pTemp->a);
		pTemp = pTemp->pNext;
	}
}

//��ѯָ���ڵ�
struct Node* SelectList(int a)
{
	struct Node* pTemp = pHead;
	while (pTemp)
	{
		if (a == pTemp->a)
		{
			return pTemp;
		}
		pTemp = pTemp->pNext;
	}
	return NULL;
}

//�������
void FreeList()
{
	//��¼�ڵ㣬��ֹͷ���ƻ������ڴ�
	struct Node* pTemp=pHead;

	while (pTemp)
	{
		struct Node* pt = pTemp;//��סpTemp��ֵ
		pTemp = pTemp->pNext;//pTempָ����һ���ڵ�
		free(pt);
	}

	//ͷβ��գ���һ�β������´�������
	pHead = NULL;
	pEnd = NULL;
}

//Ѱ������λ��,���������ݡ�
struct Node* SelectNode(int a)
{
	struct Node* pTemp = pHead;
	int i = 1;
	while (pTemp)
	{
		struct Node* pt = pTemp;
		pTemp = pTemp->pNext;
		i++;
		if (i == a)return pTemp;
	}
	return NULL;
}

//ָ��λ�ò���ڵ�
void AddListRand(int index, int a)
{
	//����Ϊ��
	if (NULL == pHead)
	{
		printf("����û�нڵ�\n");
	}
	//��λ��
	struct Node* pt = SelectNode(index);
	if (pt == NULL)
	{
		printf("û��ָ���ڵ�\n");
		return;//��ֹ����������ִ��
	}
	//�д˽ڵ�
	//��a�����ڵ�
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	//�ڵ��Ա��ֵ
	pTemp->a = a;
	pTemp->pNext = NULL;

	//���ӵ�������
	if (pt == pEnd)
	{
		//β����һ�� ָ���µĽڵ�
		pEnd->pNext = pTemp;
		//�½ڵ������һ�������β��
		pEnd = pTemp;
	}
	else
	{
		//����
		pTemp->pNext = pt->pNext;
		//���
		pt->pNext = pTemp;
	}
	
}

//ͷɾ��
void DeleteListHead()
{
	//������
	if (pHead == NULL)
	{
		printf("����������ɾ����\n");
		return;
	}
	//��ס�ɵ�ͷ
	struct Node* ptmp = pHead;;
	//ͷ����һ���ڵ����µ�ͷ
	pHead = pHead->pNext;
	//�ͷžɵ�ͷ
	free(ptmp);
}

//βɾ��
void DeleteListTail()
{
	//�жϽڵ����
	struct Node* ptmp = pHead;
	struct Node* k = pEnd;
	if (NULL == pHead)
	{
		printf("����������ɾ����\n");
		return;
	}
	if (pHead == pEnd)
	{
		free(pHead);
		pHead = NULL;
		pEnd = NULL;
		return;
	}
	while (ptmp->pNext != pEnd)//�ҵ������ڶ����ڵ�
	{
		ptmp = ptmp->pNext;
	}

	pEnd = ptmp;
	pEnd->pNext = NULL;
	free(k);
}

//ɾ������ڵ�
void DeleteListAbitrayRand(int a)
{
	struct Node* ptmp = pHead;
	struct Node* k;
	if (NULL == pHead)
	{
		printf("����������ɾ����\n");
		return;
	}
	if (pHead == pEnd)
	{
		free(pHead);
		pHead = NULL;
		pEnd = NULL;
		return;
	}

	for (int i = 1; i < a; i++)
		ptmp = ptmp->pNext;
	k = ptmp->pNext;
	ptmp->pNext = ptmp->pNext->pNext;
	free(k);
}


//ջ   ͷ���+ͷɾ��
//����  ͷ���+βɾ��   ͷɾ��+β���

int main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,11 };
	for(int i=0;i<=9;i++)
		AddNodeToList(a[i]);

	//��������
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("%d\n",p->a);
	//	p = p->pNext;
	//}

	Scanlist();//��������

	//�����ѯ
	struct Node *p=SelectList(30);
	if (p)
	{
		printf("\n%d\n", p->a);
	}
	else {
		printf("û�ҵ�\n");
	}

	printf("\n\n\n");

	AddListRand(5, 3);
	AddListRand(5, 14);
	AddListRand(14, 15);
	Scanlist();

	//ͷɾ��
	for(int i=1;i<5;i++)
		DeleteListHead();
	printf("\n");
	Scanlist();

	//��
	printf("\n-----------------------------------------------\n");
	struct Node* s = SelectNode(3);
	if (s == NULL)printf("��ָ�룡");
	else s->a = 99;
	Scanlist();

	printf("\n-----------------------------------------------\n");
	//βɾ��
	DeleteListTail();
	printf("\t\t");
	Scanlist();

	//ɾ������ڵ�
	DeleteListAbitrayRand(2);
	printf("\t\t");
	Scanlist();
	//�ͷſռ�
	//FreeList();

	system("pause");
	return 0;
}