#include<stdio.h>
#include<stdlib.h>

struct stu
{
	char a;
	char c;
	short d;
	int b;
	long l;
};

int main(void)
{
	struct stu s = { "s","c",12,11,113 };
	int sh = sizeof(s);
	printf("%u\n", sh);
	system("pause");
	return 0;
}