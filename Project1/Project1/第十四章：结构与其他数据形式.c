#define _CRT_SECURE_NO_WARNINGS
////一本书的图书目录
//#include<stdio.h>
//#include<string.h>
//
//char* s_gets(char* st, int n);
//#define MAXTITL 41//书名的最大长度加1
//#define MAXAUTL 31//作者姓名的最大长度加1
//
//struct book
//{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	double value;
//};//结构模板结束
//
//
//int main(void)
//{
//	struct book library;//把book声明为一个book类型的变量
//	printf("Please enter the book title.\n");
//	s_gets(library.title, MAXTITL);//函数调用
//	printf("Now enter the author.\n");
//	s_gets(library.author, MAXAUTL);//函数调用
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
//		find = strchr(st, '\n');//查找换行符
//		if (find)				//如果地址不是NULL
//		{
//			*find = '\0';		//在此处放置一个空字符
//		}
//		else
//		{
//			while (getchar() != '\n')//处理输入缓冲区中剩余的字符
//				continue;
//		}
//	}
//	return ret_val;
//}
//
//
////查询 fgets（）函数，strchr（）函数
/*结构体成员访问*/ 

//枚举类型
//#include<stdio.h>
//#include<stdlib.h>
//
//enum COLOR
//{
//	red,
//	yellow,
//	green
//};//从0开始依次对应,也可以指定值
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
////结构变量的名字并不是他的地址，要加&符号
//struct m {
//	int a;
//	double b;
//	char c;
//};
//
//int main(void)
//{
//	struct m s1 = { 1,2.3,'a' };
//	s1 = (struct m){ 3,4.3,'b' };//结构体赋值（强制类型转换）
//
//	struct m* p = &s1;
//	printf("%d\n", (*p).a);//.的运算符优先级更高
//
//	system("pause");
//	return 0;
//}
//

//结构体与函数
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
//void output(struct point);//传入结构本身
//void print(const struct point* p);//传入结构本身
//
//int main(void)
//{
//	struct point y = { 0,0 };//初始化结构体
//	getStruct(&y);//函数结构体赋值
//
//	output(y);//输出赋值后的结构体
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

//结构嵌套
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
////typedef为结构体重命名
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
//	};//结构数组
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

//联合
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
//		printf("%02hhx\n", u.ch[i]);//0表示不够左补零，2表示两位的十六进制数，hhx为unsigned char的转换说明符
//	//小端存储，低位在前
//	system("pause");
//	return 0;
//}