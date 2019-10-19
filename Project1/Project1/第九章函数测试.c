////函数进阶，基础看笔记
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdarg.h>
//int* fan(void);
//int* fan2(int* b);
//int fan1(int b);
//void fan3(int** p);
//void fan4(int p[]);
//void fan5(int a[][3]);
//void Digui1(int a);
//int FBNQ(int a);
//void Digui(int a);
//
//void f(int a, ...); //参数个数不确定的函数  第一个参数必须写，指定未知参数个数；
//
//int main(void)
//{
//	//函数如何返回多个值-->返回地址，用一段连续的空间装着多个值。   注意：只能返回malloc的空间的地址。
//	//malloc出来的空间由我们自己释放,其他栈区变量-->为局部变量，所以只能malloc。
//	int* a = fan();
//	printf("%d,%d\n", fan()[0], fan()[1]);
//	free(a);
//
//	//通过函数修改外部的值        使用指针
//	int s = 1;
//	fan1(s);
//	/* 传值（fan1）与传址（fan2）*/
//	printf("%d\n", s);//s并未改变，fan1函数中修改的b是copy的a，原本的a不变；
//	fan2(&s);
//	printf("%d\n", s);//fan2函数通过指针修改了a的值；
//
//	//通过函数修改指针变量的值,即使指针指向另外一块空间。
//	int m = 1;
//	int* p1 = &m;
//	//fan3(p1);
//	//printf("%p\n", p1);//错误操作，p1的值传入fan3中，而非p1的地址。
//	fan3(&p1);
//	printf("%p\n", p1);//正确操作，通过p1的地址，修改p1所指向的空间。
//
//	//一维数组做参数
//	int mn[2] = { 1,2 };
//	fan4(mn);
//	printf("%d\n", mn[0]);//mn[0]的值被修改-->证明数组做形参的本质是指针！
//
//	//二维数组做参数
//	int	MN[2][3] = { {1,2,3},{4,5,6} };
//	fan5(MN);
//
//	//函数指针   函数名字==对函数名字取地址
//	//函数地址类型==去掉函数名，剩下的东西。
//	int* (*p)(void) = fan;
//	(*p)();
//	int* (*p00)(int*) = fan2;
//	p00(p1);//函数调用本质-->函数地址＋参数列表
//
//	//递归函数
//	//1.递归打印54321
//	Digui1(5);
//	//2.递归打印斐波那契数列
//	for (int a = 1; a <= 20; a++)
//		printf("%d\n", FBNQ(a));
//	//3.递归展开分析：分析打印出来的5432112345
//	Digui(5);
//
//	//递归函数的优缺点：1.函数调用效率低2.难于阅读难于维护3.相比循环有时更简洁，唯一好处4.递归不要太多，容易爆栈5.能用循环 就用循环
//
//	//参数个数不确定的函数的写法
//	f(3, 12, 34, 56);
//
//	system("pause");
//	return 0;
//}
//
//int* fan(void)
//{
//	int* p = (int*)malloc(8);
//	if (p != NULL)
//	{
//		p[0] = 1;
//		p[1] = 2;
//	}
//	printf("通过指针调用函数成功！");
//	return p;
//}
//int fan1(int b)
//{
//	b = 10;
//	return b;
//}
//int* fan2(int* b)
//{
//	//*b = 10;
//	//return b;
//	printf("通过指针调用函数成功！\n");
//	return b;
//}
//void fan3(int** p)
//{
//	*p = NULL;
//}
//void fan4(int p[])//数组做形参的本质是指针
//{
//	for (int i = 0; i < 2; i++)
//		printf("%d\n", p[i]);
//	p[0] = 10;
//}
//void fan5(int a[][3])//第二个数3不能省略，形参做指针-->int a[][3]==int(*a)[3],3表示了指针的类型。
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d\n", a[i][j]);
//	}
//}
//void Digui1(int a)
//{
//	//三要素：1.循环控制变量并赋初始值2.循环控制变量的变化3.循环结束的条件
//	if (a >= 1)
//	{
//		printf("%d\n", a);
//		Digui1(--a);
//	}
//}
//int FBNQ(int a)
//{
//	if (a == 1)return 1;
//	else if (a == 2)return 1;
//	else if (a >= 3)
//	{
//		a = FBNQ(a - 1) + FBNQ(a - 2);
//		return a;
//	}
//	else return 0;//保证所有有效输入都有返回值；
//}
//void Digui(int a)
//{
//	if (a >0)
//	{
//		printf("%d\n", a);
//		Digui(a-1);
//		printf("%d\n", a);
//	}
//}
//
//void f(int a, ...)
//{
//	va_list ap;//定义参数数组
//	va_start(ap, a);//将参数装进数组  头文件<stdarg.h>
//	printf("%d\n", va_arg(ap, int));//调用一次取掉一个（顺序取）
//	printf("%d\n", va_arg(ap, int));
//	printf("%d\n", va_arg(ap, int));
//}