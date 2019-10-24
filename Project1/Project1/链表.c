#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"node.h"
typedef struct _List
{
	J* head;//��һ���ṹ��
	J* tail;//
}List;//����������  List����ʾstruct _List�ṹ��(һ����װ��ֵ��һ����װ��ַ)

void add(List* plist, int number);//������ӳ�Ա
void print(List* plist);//��������

int main(void)
{
	List list;//����һ���ṹ�����
	list.head =list.tail= NULL;//��β��ʼ��ΪNULL
	int number;//�����ֵ
	int i = 0;
	do {
		scanf("%d", &number);
		if (number != -1) {
		add(&list, number);
		}//add to linked-list
	} while (number != -1);

	print(&list);
	scanf("%d", &number);
	J* p;
	int isfound = 0;
	for (p = list.head; p; p = p->next)//Ѱ��
	{
		if (p->a == number)
		{
			printf("�ҵ��ˣ�");
			isfound = 1;
			break;
		}
	}
	if (!isfound)
	{
		printf("û�ҵ���");
	}

	J* q;
	for (q = NULL, p = list.head; p; p = p->next)
	{
		if (p->a == number)
		{
			if (q != NULL) {
				q->next = p->next;
				break;
			}
			else
			{
				list.head = p->next;
			}
			free(p);
		}
	}

	for (p = list.head; p; p = q)//����ɾ��
	{
		q = p->next;
		free(p);
	}


	printf("\ndone!");
	system("pause");
	return 0;
}


void add(List*plist,int number)
{
	J* p = (J*)malloc(sizeof(J));
	p->a = number;
	p->next = NULL;
	J* last = plist->head;
	if (last != NULL) {
		while (last->next)
		{
			last = last->next;
		}
		last->next = p;
	}
	else
	{
		plist->head = p;
	}
}

void print(List* plist)
{
	J* p;
	for (p = plist->head; p; p = p->next)
	{
		printf("%d\n", p->a);
	}
}