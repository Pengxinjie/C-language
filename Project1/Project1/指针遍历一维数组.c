#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//����һ������
	int a[5] = { 9,7,5,3,1 };
	int* p = &a[0];
	printf("%p,%p\n", p, &a[0]);

	system("pause");
	return 0;
}