///*除理论外知识点*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//#include<memory.h>
//
////涉及到的函数：malloc()/free()/memset()/calllc（）/_msize()函数
//
//int main(void)
//{
//	//int* p = (int*)malloc(20);
//	//size_t a = _msize(p);测malloc的空间的大小
//	//printf("%u\n", a);
//	//realloc(p, 40);重新分配大小
//	//a = _msize(p);
//	//printf("%u\n", a);
//	int* p = (int*)malloc(sizeof(int) * 5);
//	if(p!=NULL)
//		memset(p, 0, 20);//将每个字节赋值成0！
//	for (int i = 0; i <= 4; i++)
//	{
//		if(p!=NULL)
//			printf("%d\n", p[i]);
//	}
//
//	//编程的好习惯，free后的一系列操作。
//
//	p = NULL;
//	if (p == NULL);
//	{
//		printf("操作到空指针！\n");
//	}
//
//	//动态数组
//	int b;
//	int mm=scanf("%d", &b);
//	int* s = (int*)malloc(b);
//
//	//变长数组  ---->支持的编译器少，malloc动态数组可替代。
//	/*int m;
//	scanf("%d", &m);
//	int r[m];  vs未实现  c11标准*/
//	free(p);
//	//数组指针类型  eg.int（*变量名）[类型数量]
//	int(*p1)[5] = (int(*)[5])malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		if(p1!=NULL)
//		printf("%d\n", (*p1)[i]);
//	}
//	if(p1!=NULL)
//	memset(p1, 0, 20);
//	
//	for (int i = 0; i < 5; i++)
//	{
//		if(p1!=NULL)
//		printf("%d\n", (*p1)[i]);
//	}
//	//数组名字就是数组首元素的首地址
//	//*（p+n）=p[n]
//	//一个指针指向一个变量或者一块空间，*这个指针就是这个变量本身。
//	free(p1);
//	//malloc二维数组
//	int(*p2)[2][3] = (int(*)[2][3])malloc(sizeof(int) * 2 * 3);
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if(p2!=NULL)
//			(*p2)[i][j] = 99;
//		}
//	}
//	//嵌套循环赋值
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if(p2!=NULL)
//			printf("%d\n", (*p2)[i][j] = 99);
//		}
//	}
//	//malloc的空间返回的指针使用前先判断是否为空指针！
//	free(p2);
//	//calloc（）函数-->申请一段数组（连续）空间，并初始化成0；
//	int* p3=(int*)calloc(5, 4);//第一个参数为参数个数；第二个参数为该元素的字节大小;
//
//	for (int i = 0; i < 5; i++)
//	{ 
//		if(p3!=NULL)
//		printf("%d\n", p3[i]);
//	}
//
//	if (p != NULL)
//	{
//		size_t a = _msize(p);
//		printf("%u\n", a);
//	}
//	//relloc（）函数介绍
//	int p4=(int*)realloc(p, 40);
//	if (p != NULL)
//	{
//		size_t a = _msize(p);
//		printf("%u\n", a);
//	}
//	free(p3);
//
//	//calloc和malloc的选择-->都是操作指针，注意别越界！
//	//calloc申请数组方便，且初始化为0
//	//复杂数据结构，malloc更合适；
//	system("pause");
//	return 0;
//}