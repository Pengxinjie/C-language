//#include<stdio.h>
//#include<stdlib.h>
//
//void fun(int* p, int b)
//{
//	int i;
//	for (i = 0; i < b; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main(void)
//{
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	fun(&a[0][0], 2*3);
//	//理论基础：不管是几维数组，都是一段连续的空间。
//
//	int b[3][3] = { {11,12,13},{21,22,23},{31,32,33} };
//	fun(&b[0][0], 3 * 3);
//
//	system("pause");
//	return 0;
//}