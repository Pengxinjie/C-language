//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////void* fan(void*);
/////*�漰���ĺ�����
////1.putchar()
////2.scanf_s()
////3.puts()
////4.gets()
////5.fgets()
////6.fputs()
////7.strlen()
////8.strcat()
////9.strncat()
////10.strcpy()
////11.strncpy()
////12.strcmp()
////13.atoi()
////14.itoa()
////15.sprintf()
////*/
////// void*�ɼ��ݶ���ָ��
////
//int main(void)
//{
////	//�ַ�����
////	char s = 'a';
////	printf("%c\n", s);
////	printf("%d\n", s-32);
////	putchar(s);//ͷ�ļ�<stdio.h>
////
////	//���������뻺����
////	/*
////		1.setbuf(stdin,NULL);
////		2.fflush(stdin);//ֻ��vs�к�ʹ���������ã���ֲ�Բ
////		3.	int c;(�Ƽ�)
////			while ((c = getchar()) != '\n' && c != EOF);
////		4.�¸�scanfǰ�ӿո�
////	*/
////	scanf("%c", &s);
////	printf("%c\n", s);
////	
////	//int c;
////	//while ((c = getchar()) != '\n' && c != EOF);
////	
////	scanf(" %c", &s);
////	printf("%c\n", s);
////
////	scanf_s("%c",&s,1);//1�����ֽ���
////
////	//�ַ�����-->ֻ����%c���
////	char str[5] = { 'a','b','c','d','e' };//{}ֻ����������ĳ�ʼ����
////	printf("%c\n",str[1]);//���ֳ�ʼ����δ��ʼ����Ԫ�ظ�ֵΪ0��
////
////	//�ַ����������
////	/*�����ַ��������ַ���:��β�Ƿ���'\0'*/
////	char str1[5]= { 'a','b','c','d','\0' };//%s��ָ���ĵ�ַ��ʼ��ӡ����\0������  ��ֵֻ��һ��Ԫ��һ��Ԫ��ȥд���ǵú���д'\0'
////	printf("%s\n", str1);
////	puts(str1);//����Ϊ�ַ������ַ���ָ��Ԫ�ص�ַ--->һ��ֻ�����һ���ַ���,���Զ���ӻ��з���
////	//puts������'\0'����
////
////	//gets()����-->��ȡ�������룬ֱ���������з�
////	char words[11];
////	puts("enter a string,please.");
////	gets(words);//�����÷�
////	//���ҵ�gets����������ֻ��һ���������޷���������Ƿ�Խ�磨�������������-->ֻ֪���������ʼ�㣬��֪�������ж���Ԫ�ء�
////	printf("%s\n", words);
////	/*C11��׼������gets()����*/
////	
////	//gets()�����Ʒ-->fgets()
////	/*�ڶ��������������ַ�����������������س���*/
////	printf("�����룺");
////	fgets(words,10,stdin);//��gets()������һ����ͬΪ��fgets��������뻻�з������ַ����С�
////	/*����������ָ��Ҫ������ļ�������Ӽ��̶�ȡ��������stdin*/
////	printf("%s\n",words);//words�к��л��з�
////
////	//fputs()�����ĵڶ�������ָ����Ҫд����ļ������Ҫ��ʾ�ڼ������ʾ���ϣ�������stdout
////	fputs(words, stdout);
////	/*
////		fgets()��gets()��������һ������fgets()����������ַ���ĩβ���ϻ��з���
////	*/
////	//��δ�������з���  �ҵ�����Ȼ���滻��'\0'
////	fputs(words, stdout);
////	int i=0;
////	while (words[i] != '\n')
////	{
////		i++;
////	}
////	words[i] = '\0';
////	fputs(words, stdout);
////
////	//��ζ���������ַ���
////	while (getchar() != '\n')
////		continue;
////
////	//strlen()����
////	printf("words�ĳ���Ϊ%d\n", strlen(words));
////
//	//strcat()����,strncat()����
//	//char m[10],n[10];
//	//printf("�������һ���ַ�����ֵ��");
//	//fgets(m, 5, stdin);
//	//printf("������ڶ����ַ�����ֵ��");
//	//fgets(n, 5, stdin);
//	//int i = 0;
//	//while (m[i]!='\n')
//	//{
//	//	i++;
//	//}
//	//m[i] = '\0';
//	////strcat(m, n);
//	//strncat(m,n,2);//����������ָ��ƴ�ӵ��ַ�������
//	//fputs(n,stdout);
//	//fputs(m,stdout);
//
//	//�����ַ���
//	//int* p = "hello";
//	//*p="ss";�����޸�   -->�ַ�������
//
//	//�����ַ�����ʼ���ַ�����
//	//char str[] = "hello";//�Դ�'\0',ǧ���Խ�磡   -->�ַ�������
//	//str[1] = 'w';//�޸ĵ�ջ����copy����һ�ݣ��ַ����������Ƿݲ��䡣
//	//fputs(str, stdout);
//
//	////�ַ�����ĸ�ֵ
//	////�ַ����鶨���꣬������ֱ�ӵĽ��и�ֵ������ѭ����
//	//char* p = "world";
//	//char str1[] = "woshi";
//	//for (int i=0; *p!='\0'; p++)
//	//{
//	//	str[i] = *p;
//	//	i++;
//	//}
//	//fputs(str, stdout);
//
//	////strcpy()����/strcpy_s()
//	//strcpy(str,str1);//��һ������Ҫ�㹻��
//	//fputs(str, stdout);
//	//strcpy_s(str, 6, str1);//6ָ���Ĵ�С��str
//	//fputs(str, stdout);
//	//char str2[] = "sbsb";
//	////strncpy()������strncpy_s()����
//	//strncpy(str, str2, 2);//���滻
//	//strncpy_s(str, 5, str2, 4);
//	//printf("\n\n");
//	//fputs(str, stdout);
//	//scanf();���ո���Ϊ�ָ����������롣%s��
//
//	//strcmp()������һ��һ���ȴ�С���ȶ�Ӧ��ASCII�룩����strncmp()�������������������ñȽϵĸ�����
//	//char str[] = "hello";
//	//char str1[] = "hellw";
//	//int a=strcmp(str, str1);//ǰ���򷵻�ֵ����0������򷵻�ֵС��0��
//	//printf("%d\n", a);
//
//	//��̽strcat()����/strncat
//	//char str[20] = "abc";
//	//strcat(str, "def");
//	//fputs(str, stdout);
//	//strncat(str,"ghi",2);
//	//fputs(str, stdout);
//
//	//atoi()��itoa()  -->�������ַ����ת��
//	printf("%d",atoi("1234"));
//	char s[10] = {0};
//	_itoa(16, s, 16);
//	fputs(s, stdout);
//	char st[20];
//	
//	//sprintf()����
//	sprintf(st, "%c,%d,%f",'a',12,23.3);//��������̨�������������ת�����ַ���������st��
//	fputs(st, stdout);
//
//	//�ַ����������ά�ַ�����
//	char* r[3] = { "sd","fd","gf" };//�ַ�������-->����-->ָ������
//	r[0] = "er";//ָ���µ��ַ���
//
//	//*r[1] = "sd";�������-->��ͼ�ı䳣���ַ���
//	//printf("\n%s\n", *r[1]);�������
//
//	printf("%s\n", r[0]);
//	char k[2][3] = { {"mm"},{"vv"} };//��ά�ַ�����
//
//	system("pause");
//	return 0;
//}