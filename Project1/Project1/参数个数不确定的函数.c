//#include<stdio.h>
//#include<stdlib.h>
//#include<stdarg.h>
//
//void fun(int a, ...)//指定未知参数的个数
//{
//	va_list ap;//相当于定义了一个参数数组
//	va_start(ap, a);//将参数装入数组
//	printf("%d\n", va_arg(ap, int));
//	printf("%d\n", va_arg(ap, int));
//	printf("%d\n", va_arg(ap, int));
//}
//
//int main(void)
//{
//	fun(3, 12, 34, 45);
//
//	system("pause");
//	return 0;
//}