#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch;
	int shuzi = 0, zimu = 0, kongge = 0, qita = 0;
	printf("请输入一行字符:");
	ch = getchar();
	while (1)
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		{
			zimu++;
		}
		else if (ch == ' ')
		{
			kongge++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			shuzi++;
		}
		else
		{
			qita++;
		}
	}
	printf("英文字母的个数为：%d\n", zimu);
	printf("数字的个数为：%d\n", shuzi);
	printf("空格的个数为：%d\n", kongge);
	printf("其他字符的个数为：%d\n", qita);
	return 0;
}