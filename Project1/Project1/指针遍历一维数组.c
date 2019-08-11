//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	//定义一个数组
//	int a[5] = { 9,7,5,3,1 };
//	int* p = &a[0];
//	printf("%p,%p\n", p, &a[0]);
//	int i=0;
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d,%p\n",*(p+i),p+i);//遇到混合运算记得考虑运算符优先级
//	}
//	
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d\n", *p++);
//	}
//
//
//	system("pause");
//	return 0;
//}