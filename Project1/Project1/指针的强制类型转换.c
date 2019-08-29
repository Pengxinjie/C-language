//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	//int a = 12;
//	//double* p = (double*)&a;
//	//*p = 13.0;
//	//printf("%lf\n", *p);//4字节转换为8字节，指针操作越界
//	double a = 12.2;
//	int* p = (int*)& a;
//	*p = 11;
//	p[1] = 111;
//	int b = p[1];
//	printf("%d\n", b);
//	printf("%d\n",*p);//8字节转换为4字节，指针操作不越界。
//
//	short* p1 = (short*)& a;
//	int* p2 = (int*)(p1+1);
//	*p2 = 18;
//	printf("%d\n", *p2);
//	system("pause");
//	return 0;
//}