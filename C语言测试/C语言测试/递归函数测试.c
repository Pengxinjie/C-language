#include<stdio.h>
#include<stdlib.h>

void fun(int a)
{
	if (a > 0)
	{
		printf("%d\n", a);
		fun(a - 1);
		printf("%d\n", a);
	}
}

int fun1(int a)
{
	if (a == 1 || a == 2)
		return 1;
	else
	{
		a = fun1(a-1) + fun1(a-2);
		return a;
	}
}

int main(void)
{

	fun(5);
	
	printf("%d\n", fun1(5));
	system("pause");
	return 0;
}