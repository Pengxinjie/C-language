#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 12;
	int* p = &a;
	//证明不同
	int* *p1 = &p;//二级指针。
	int*** p2 = &p1;//三级指针。
	

	system("pause");
	return 0;
}