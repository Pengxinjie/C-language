//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	int a[2][3] = { {3,5,7},{1,4,8} };
//	int* p = &a[1][1];
//	int(*p1)[3] = &a[0];
//	int(*p2)[2][3] = &a;
//
//	(*p2)[1][1] = 100;
//	printf("%d\n", a[1][1]);
//
//	int n = 0,
//		m = 0;
//	for (n = 0; n < 2; n++)
//	{
//		for (m = 0; m < 3; m++)
//		{
//			printf("%d\n", (*p2)[n][m]);
//		}
//	}
//
//	system("pause");
//	return 0;
//}