///*��������֪ʶ��*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//#include<memory.h>
//
////�漰���ĺ�����malloc()/free()/memset()/calllc����/_msize()����
//
//int main(void)
//{
//	//int* p = (int*)malloc(20);
//	//size_t a = _msize(p);��malloc�Ŀռ�Ĵ�С
//	//printf("%u\n", a);
//	//realloc(p, 40);���·����С
//	//a = _msize(p);
//	//printf("%u\n", a);
//	int* p = (int*)malloc(sizeof(int) * 5);
//	if(p!=NULL)
//		memset(p, 0, 20);//��ÿ���ֽڸ�ֵ��0��
//	for (int i = 0; i <= 4; i++)
//	{
//		if(p!=NULL)
//			printf("%d\n", p[i]);
//	}
//
//	//��̵ĺ�ϰ�ߣ�free���һϵ�в�����
//
//	p = NULL;
//	if (p == NULL);
//	{
//		printf("��������ָ�룡\n");
//	}
//
//	//��̬����
//	int b;
//	int mm=scanf("%d", &b);
//	int* s = (int*)malloc(b);
//
//	//�䳤����  ---->֧�ֵı������٣�malloc��̬����������
//	/*int m;
//	scanf("%d", &m);
//	int r[m];  vsδʵ��  c11��׼*/
//	free(p);
//	//����ָ������  eg.int��*��������[��������]
//	int(*p1)[5] = (int(*)[5])malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		if(p1!=NULL)
//		printf("%d\n", (*p1)[i]);
//	}
//	if(p1!=NULL)
//	memset(p1, 0, 20);
//	
//	for (int i = 0; i < 5; i++)
//	{
//		if(p1!=NULL)
//		printf("%d\n", (*p1)[i]);
//	}
//	//�������־���������Ԫ�ص��׵�ַ
//	//*��p+n��=p[n]
//	//һ��ָ��ָ��һ����������һ��ռ䣬*���ָ����������������
//	free(p1);
//	//malloc��ά����
//	int(*p2)[2][3] = (int(*)[2][3])malloc(sizeof(int) * 2 * 3);
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if(p2!=NULL)
//			(*p2)[i][j] = 99;
//		}
//	}
//	//Ƕ��ѭ����ֵ
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if(p2!=NULL)
//			printf("%d\n", (*p2)[i][j] = 99);
//		}
//	}
//	//malloc�Ŀռ䷵�ص�ָ��ʹ��ǰ���ж��Ƿ�Ϊ��ָ�룡
//	free(p2);
//	//calloc��������-->����һ�����飨�������ռ䣬����ʼ����0��
//	int* p3=(int*)calloc(5, 4);//��һ������Ϊ�����������ڶ�������Ϊ��Ԫ�ص��ֽڴ�С;
//
//	for (int i = 0; i < 5; i++)
//	{ 
//		if(p3!=NULL)
//		printf("%d\n", p3[i]);
//	}
//
//	if (p != NULL)
//	{
//		size_t a = _msize(p);
//		printf("%u\n", a);
//	}
//	//relloc������������
//	int p4=(int*)realloc(p, 40);
//	if (p != NULL)
//	{
//		size_t a = _msize(p);
//		printf("%u\n", a);
//	}
//	free(p3);
//
//	//calloc��malloc��ѡ��-->���ǲ���ָ�룬ע���Խ�磡
//	//calloc�������鷽�㣬�ҳ�ʼ��Ϊ0
//	//�������ݽṹ��malloc�����ʣ�
//	system("pause");
//	return 0;
//}