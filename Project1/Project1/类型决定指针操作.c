#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 123;
	int* p = &a;

	printf("%d,%d\n", a, *p);
	*p = 12345;
	printf("%d,%d\n", a, *p);

	double d=123.123;
	int* p1 = &d;
	printf("%d\n", p1);//int���ֽڣ�double���ֽڣ������ݡ�


	system("pause");
	return 0;
}