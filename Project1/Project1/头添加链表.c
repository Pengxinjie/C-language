#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//创建节点结构体
struct Node {
	int a;
	struct Node* pNext;
};

//设置头尾指针
struct Node* pHead=NULL;
struct Node* pEnd=NULL;

//创建链表
void AddNodeToList(int n)
{
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	pTemp->a = n;
	pTemp->pNext = NULL;

	if (pHead== NULL || pEnd == NULL)//空链表，头即尾。
	{
		pHead = pTemp;
		pEnd = pTemp;
	}
	else {//尾添加
		pEnd->pNext = pTemp;//将pTemp接在pEnd尾部
		pEnd = pTemp;
	}
	struct Node* bp = pHead;
}

void Scanlist()//遍历链表
{
	struct Node* pTemp = pHead;
	while (pTemp)
	{
		printf("%d\n", pTemp->a);
		pTemp = pTemp->pNext;
	}
}

//查询指定节点
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

//链表清空
void FreeList()
{
	//记录节点，防止头被破坏，丢内存
	struct Node* pTemp=pHead;

	while (pTemp)
	{
		struct Node* pt = pTemp;//记住pTemp的值
		pTemp = pTemp->pNext;//pTemp指向下一个节点
		free(pt);
	}

	//头尾清空，下一次才能重新创建链表
	pHead = NULL;
	pEnd = NULL;
}

//寻找链表位置,改链表内容。
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

//指定位置插入节点
void AddListRand(int index, int a)
{
	//链表为空
	if (NULL == pHead)
	{
		printf("链表没有节点\n");
	}
	//找位置
	struct Node* pt = SelectNode(index);
	if (pt == NULL)
	{
		printf("没有指定节点\n");
		return;//防止下面代码继续执行
	}
	//有此节点
	//给a创建节点
	struct Node* pTemp = (struct Node*)malloc(sizeof(struct Node));
	//节点成员赋值
	pTemp->a = a;
	pTemp->pNext = NULL;

	//链接到链表上
	if (pt == pEnd)
	{
		//尾巴下一个 指向新的节点
		pEnd->pNext = pTemp;
		//新节点是最后一个，变成尾巴
		pEnd = pTemp;
	}
	else
	{
		//先连
		pTemp->pNext = pt->pNext;
		//后断
		pt->pNext = pTemp;
	}
	
}

//头删除
void DeleteListHead()
{
	//链表检测
	if (pHead == NULL)
	{
		printf("空链表无需删除！\n");
		return;
	}
	//记住旧的头
	struct Node* ptmp = pHead;;
	//头的下一个节点变成新的头
	pHead = pHead->pNext;
	//释放旧的头
	free(ptmp);
}

//尾删除
void DeleteListTail()
{
	//判断节点个数
	struct Node* ptmp = pHead;
	struct Node* k = pEnd;
	if (NULL == pHead)
	{
		printf("空链表无需删除！\n");
		return;
	}
	if (pHead == pEnd)
	{
		free(pHead);
		pHead = NULL;
		pEnd = NULL;
		return;
	}
	while (ptmp->pNext != pEnd)//找到倒数第二个节点
	{
		ptmp = ptmp->pNext;
	}

	pEnd = ptmp;
	pEnd->pNext = NULL;
	free(k);
}

//删除任意节点
void DeleteListAbitrayRand(int a)
{
	struct Node* ptmp = pHead;
	struct Node* k;
	if (NULL == pHead)
	{
		printf("空链表无需删除！\n");
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


//栈   头添加+头删除
//队列  头添加+尾删除   头删除+尾添加

int main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,11 };
	for(int i=0;i<=9;i++)
		AddNodeToList(a[i]);

	//遍历链表
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("%d\n",p->a);
	//	p = p->pNext;
	//}

	Scanlist();//遍历链表

	//链表查询
	struct Node *p=SelectList(30);
	if (p)
	{
		printf("\n%d\n", p->a);
	}
	else {
		printf("没找到\n");
	}

	printf("\n\n\n");

	AddListRand(5, 3);
	AddListRand(5, 14);
	AddListRand(14, 15);
	Scanlist();

	//头删除
	for(int i=1;i<5;i++)
		DeleteListHead();
	printf("\n");
	Scanlist();

	//改
	printf("\n-----------------------------------------------\n");
	struct Node* s = SelectNode(3);
	if (s == NULL)printf("空指针！");
	else s->a = 99;
	Scanlist();

	printf("\n-----------------------------------------------\n");
	//尾删除
	DeleteListTail();
	printf("\t\t");
	Scanlist();

	//删除任意节点
	DeleteListAbitrayRand(2);
	printf("\t\t");
	Scanlist();
	//释放空间
	//FreeList();

	system("pause");
	return 0;
}