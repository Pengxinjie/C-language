//#include<stdio.h>
//#include<stdlib.h>
//#pragma pack(4)  //手动设置内存对齐字节数。 可设置最大的字节数为类型中的最大类型的字节数。
//
//struct stu
//{
//	char a;//最大类型为基准，不包括数组；
//	char c;
//	int b;
//	long l;
//	short d;
//};
//
//int main(void)
//{
//	struct stu s = { "s","c",12,11,113 };
//	int sh = sizeof(s);
//	printf("%u\n", sh);
//	system("pause");
//	return 0;
//}