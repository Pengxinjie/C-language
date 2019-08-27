//#include<malloc.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void)
//{
//	//int* p=(int*)malloc(1024*1024*1024*2);
//
//	//if (p == NULL)
//	//{
//	//	printf("申请空间失败！\n");
//	//}
//	
//	int* p = malloc(40);//vs可不写（类型转换）,无法初始化。
//	if (p == NULL)
//	{
//		printf("申请空间失败！\n");
//	}
//	//int i;
//	//for (i = 0; i < 10; i++)
//	//	p[i] = 0;
//
//	memset(p, 1, 40);//memset把每一个字节都赋值成1 1即为 1 0000 0001 0000 0001 0000 0001
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d\n", p[i]);
//	system("pause");
//	return 0;
//}