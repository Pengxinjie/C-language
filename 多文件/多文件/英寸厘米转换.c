//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	double yingcun;
//	double cm;
//	printf("������������ߣ�Ӣ�磩��");
//	scanf("%lf", &yingcun);
//	cm = yingcun * 2.54;
//	printf("�������ת����������Ϊ��%.2lf",cm);
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double a = 1.1;
	int* p = (int*)& a;
	*p = 1;
	printf("%d\n", *p);

	system("pause");
	return 0;
} 