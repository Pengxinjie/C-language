//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	char str[20];
//	//scanf_s("%s", &str[0], 19);//无法读取空格。scanf将空格视为分隔符。
//	//scanf_s("%s", &str[0], 19);//%s会自动加‘\0’   20-19=%s自带的一个'\0'.
//	gets_s(str,19);//可读取空格,同样会自加'\0';
//	printf("%s\n", str);
//
//	system("pause");
//	return  0;
//}