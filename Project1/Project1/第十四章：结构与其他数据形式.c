#define _CRT_SECURE_NO_WARNINGS
////һ�����ͼ��Ŀ¼
//#include<stdio.h>
//#include<string.h>
//
//char* s_gets(char* st, int n);
//#define MAXTITL 41//��������󳤶ȼ�1
//#define MAXAUTL 31//������������󳤶ȼ�1
//
//struct book
//{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	double value;
//};//�ṹģ�����
//
//
//int main(void)
//{
//	struct book library;//��book����Ϊһ��book���͵ı���
//	printf("Please enter the book title.\n");
//	s_gets(library.title, MAXTITL);//��������
//	printf("Now enter the author.\n");
//	s_gets(library.author, MAXAUTL);//��������
//	printf("Now enter the value.\n");
//	
//	int a=scanf("%lf",& library.value);
//	printf("%s by %s: $%.2f\n",library.title,library.author,library.value);
//	printf("%s: \"%s\"($%.2f)\n", library.author, library.title, library.value);
//	printf("done!\n");
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');//���һ��з�
//		if (find)				//�����ַ����NULL
//		{
//			*find = '\0';		//�ڴ˴�����һ�����ַ�
//		}
//		else
//		{
//			while (getchar() != '\n')//�������뻺������ʣ����ַ�
//				continue;
//		}
//	}
//	return ret_val;
//}
//
//
////��ѯ fgets����������strchr��������
/*�ṹ���Ա����*/ 

//ö������
//#include<stdio.h>
//#include<stdlib.h>
//
//enum COLOR
//{
//	red,
//	yellow,
//	green
//};//��0��ʼ���ζ�Ӧ,Ҳ����ָ��ֵ
//
//void f(enum COLOR c);
//
//int main(void)
//{
//	enum COLOR t = red;
//	scanf("%d", &t);
//	f(t);
//	printf("\n%d\n", red);
//
//	system("pause");
//	return 0;
//}
//
//void f(enum COLOR c)
//{
//	printf("%d\n", c);
//}

//#include<stdio.h>
//#include<stdlib.h>
//
////�ṹ���������ֲ��������ĵ�ַ��Ҫ��&����
//struct m {
//	int a;
//	double b;
//	char c;
//};
//
//int main(void)
//{
//	struct m s1 = { 1,2.3,'a' };
//	s1 = (struct m){ 3,4.3,'b' };//�ṹ�帳ֵ��ǿ������ת����
//
//	struct m* p = &s1;
//	printf("%d\n", (*p).a);//.����������ȼ�����
//
//	system("pause");
//	return 0;
//}
//

//�ṹ���뺯��
//#include<stdio.h>
//#include<stdlib.h>
//void fun(struct MyStruct *p);
//struct MyStruct
//{
//	int a;
//	double b;
//};
//
//int main(void)
//{
//	struct MyStruct s1 ={ 1,3.3 };
//	struct MyStruct* p = &s1;
//
//	fun(p);
//	printf("%d,%lf\n", s1.a, s1.b);
//
//	system("pause");
//	return 0;
//}
//
//void fun(struct MyStruct *p)
//{
//	(*p).a = 12;
//	p->b = 19.9;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//struct point* getStruct(struct point*p);
//void output(struct point);//����ṹ����
//void print(const struct point* p);//����ṹ����
//
//int main(void)
//{
//	struct point y = { 0,0 };//��ʼ���ṹ��
//	getStruct(&y);//�����ṹ�帳ֵ
//
//	output(y);//�����ֵ��Ľṹ��
//	output(*getStruct(&y));//
//
//	print(getStruct(&y));
//	system("pause");
//	return 0;
//}
//
//struct point* getStruct(struct point*p)
//{
//	scanf("%d %d",&p->x,&p->y);
//
//	printf("%d,%d\n", p->x, p->y);
//	return p;
//}
//
//void output(struct point p)
//{
//	printf("%d%d", p.x,p.y);
//}
//
//void print(const struct point* p)
//{
//	printf("%dasd%d", p->x, p->y);
//}

//�ṹǶ��
//#include<stdio.h>
//#include<stdlib.h>
//
//struct time {
//	int hour;
//	int min;
//	int sec;
//};
//
//struct time timeUpdate(struct time now);
//struct time timeUpdate(struct time now)
//{
//	if (now.sec == 59&&now.min!=59)
//	{
//		now.sec = 00;
//		now.min++;
//	}
//	else if (now.sec == 59 && now.min == 59&&now.hour!=23)
//	{
//		now.sec = 00;
//		now.min = 00;
//		now.hour++;
//	}
//	else if (now.sec == 59 && now.min == 59 && now.hour == 23)
//	{
//		now.hour = 00;
//		now.min = 00;
//		now.sec = 00;
//	}
//	else
//	{
//		now.sec++;
//	}
//	return now;
//}
//
////typedefΪ�ṹ��������
////typedef struct s
////{
////	int a;
////	int b;
////} ss;
////
////ss g = {
////	1,2
////};
//
//int main(void)
//{
//
//	struct time testTimes[5] = {
//		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
//	};//�ṹ����
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("Time is %.2i:%.2i:%.2i",
//			testTimes[i].hour, testTimes[i].min, testTimes[i].sec);
//		testTimes[i] = timeUpdate(testTimes[i]);
//
//		printf("...one sec later it's %.2i:%.2i:%.2i\n",
//			testTimes[i].hour, testTimes[i].min, testTimes[i].sec);
//	}
//
//	system("pause");
//	return 0;
//}

//����
//#include<stdio.h>
//#include<stdlib.h>
//
//union MyUnion
//{
//	int i;
//	char ch[4];
//};
//
//int main(void)
//{
//	union MyUnion u;
//	u.i = 1234;
//	for (int i = 0; i <= 3; i++)
//		printf("%02hhx\n", u.ch[i]);//0��ʾ�������㣬2��ʾ��λ��ʮ����������hhxΪunsigned char��ת��˵����
//	//С�˴洢����λ��ǰ
//	system("pause");
//	return 0;
//}