#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch;
	int shuzi = 0, zimu = 0, kongge = 0, qita = 0;
	printf("������һ���ַ�:");
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
	printf("Ӣ����ĸ�ĸ���Ϊ��%d\n", zimu);
	printf("���ֵĸ���Ϊ��%d\n", shuzi);
	printf("�ո�ĸ���Ϊ��%d\n", kongge);
	printf("�����ַ��ĸ���Ϊ��%d\n", qita);
	return 0;
}