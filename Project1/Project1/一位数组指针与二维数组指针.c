//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//int main(void)
//{
//	int(*p)[5] = (int(*)[5])malloc(20);
//	int a[5];
//	int(*p1)[5] = &a;
//	*(*p + 0) = 1;
//	*(*p + 1) = 2;
//	*(*p + 2) = 3;
//	*(*p + 3) = 4;
//	*(*p + 4) = 5;
//
//
//	int i = 0;
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d\n", *(*p + i));
//	}
//
//	int(*p2)[2][3] = (int(*)[2][3])malloc(24);
//	int i1 = 0;
//	int i2 = 0;
//	
//	for (i1 = 0; i1 < 2; i1++)
//	{
//		for (i2 = 0; i2 <= 2; i2++)
//		{
//			(*p2)[i1][i2] = 100;
//		}
//	}
//	for (i1 = 0; i1 < 2; i1++)
//	{
//		for (i2 = 0; i2 <= 2; i2++)
//		{
//			printf("%d,",(*p2)[i1][i2]);
//		}
//	}
//
//
//
//
//	free(p);
//	free(p2);
//	system("pause");
//	return 0;
//}