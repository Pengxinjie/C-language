#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 12;
	int* p = &a;
	//֤����ͬ
	int* *p1 = &p;//����ָ�롣
	int*** p2 = &p1;//����ָ�롣
	

	system("pause");
	return 0;
}