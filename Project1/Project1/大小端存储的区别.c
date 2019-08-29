//#include<stdio.h>
//#include<stdlib.h>
//
//union u
//{
//	int w;
//	char q[4];
//}l = {134480385};
//
//int main(void)//个人计算机正常是小端存储。
//{
//	int a = 134480385;
//	char* p = (char*)& a;
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	int temp = p[0];
//
//	p[0] = p[3];//小端->大端。
//	int s = p[1];
//	p[1] = p[2];
//	p[2] = s;
//	p[3] = temp;
//	
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	
//	printf("%d,%d,%d,%d\n", l.q[0],l.q[1],l.q[2],l.q[3]);
//
//	system("pause");
//	return 0;
//}