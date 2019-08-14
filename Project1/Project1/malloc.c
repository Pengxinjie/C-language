//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	//int*p=(int*)malloc(sizeof(int));//4指的是四字节,(int*)表示是四字节的int类型空间，强制类型转换。
//	//int* p = (int*)malloc(1000000000000000);//NULL
//	//if (NULL == p)
//	//{
//	//	//提示
//	//	printf("申请空间失败\n");
//	//	
//	//}
//	int* p = (int*)malloc(4);//所申请的空间不能初始化。
//	*p = 100;
//	printf("%d\n",*p);
//
//	int* p1 = (int*)malloc(40);
//	int i = 0;
//	memset(p1, 1, 40);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p1 + i));
//	}
//
//	
//	
//	system("pause");
//	return 0;
//} 