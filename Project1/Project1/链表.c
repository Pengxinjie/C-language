#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"node.h"
typedef struct _List
{
	J* head;//第一个结构体
	J* tail;//
}List;//类型重命名  List即表示struct _List结构体(一部分装数值，一部分装地址)

void add(List* plist, int number);//链表添加成员
void print(List* plist);//遍历链表

int main(void)
{
	List list;//定义一个结构体变量
	list.head =list.tail= NULL;//首尾初始化为NULL
	int number;//链表的值
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
	for (p = list.head; p; p = p->next)//寻找
	{
		if (p->a == number)
		{
			printf("找到了！");
			isfound = 1;
			break;
		}
	}
	if (!isfound)
	{
		printf("没找到！");
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

	for (p = list.head; p; p = q)//链表删除
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