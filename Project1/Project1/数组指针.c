#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[5]={ 3,4,5,2,6 };
	
	int(*p1)[5]= &a;
	*p1 == a;//*这个指针就是变量本身
	(*p1)[0] = 100;
	printf("%d\n",a[0]);

	system("pause");
	return 0;
}