//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	//二维数组指针
//	int a[2][2] = { {3,5},{7,0} };
//	int(*p)[2][2] = &a;
//
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d\n", i[*p][j]);
//		}
//	}
//	//二维 指针de数组
//	int R = 1, S = 2, T = 3, U = 4;
//	int *r=&R, *s=&S, *t=&T, *u=&U;
//	int* b[2][2] = { {r,s},{t,u} };
//	printf("%d\n", *t);
//
//	system("pause");
//	return 0;
//}