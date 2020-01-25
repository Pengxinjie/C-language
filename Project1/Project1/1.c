#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void fun(char a)
{
	if ('\n' == a)return;
	a = getchar();
	fun(a);
	putchar(a);
}

int main(void)
{
	fun(' ');
	return 0;
}