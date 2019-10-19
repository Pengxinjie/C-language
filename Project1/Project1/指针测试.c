//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	//利用指针遍历一维数组
//	double a[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double* p = a;
//	printf("%lf\n",p[1]);
//	*(p + 1) = 9.9;
//	printf("%lf\n", p[1]);
//
//	//指针数组-->指针的数组-->数组里装着多串地址
//	int m = 1;
//	int n = 10;
//	int* p1[2] = { &m,&n };
//
//	printf("%d\n", *p1[1]);
//	system("pause");
//	return 0;
//}