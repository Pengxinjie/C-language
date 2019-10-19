//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////void* fan(void*);
/////*涉及到的函数：
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
////// void*可兼容多种指针
////
//int main(void)
//{
////	//字符介绍
////	char s = 'a';
////	printf("%c\n", s);
////	printf("%d\n", s-32);
////	putchar(s);//头文件<stdio.h>
////
////	//如何清空输入缓冲区
////	/*
////		1.setbuf(stdin,NULL);
////		2.fflush(stdin);//只在vs中好使，尽量不用；移植性差；
////		3.	int c;(推荐)
////			while ((c = getchar()) != '\n' && c != EOF);
////		4.下个scanf前加空格
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
////	scanf_s("%c",&s,1);//1代表字节数
////
////	//字符数组-->只能用%c输出
////	char str[5] = { 'a','b','c','d','e' };//{}只能用于数组的初始化；
////	printf("%c\n",str[1]);//部分初始化，未初始化的元素赋值为0；
////
////	//字符串及其输出
////	/*区分字符数组与字符串:结尾是否有'\0'*/
////	char str1[5]= { 'a','b','c','d','\0' };//%s从指定的地址开始打印，遇\0结束！  赋值只能一个元素一个元素去写，记得后面写'\0'
////	printf("%s\n", str1);
////	puts(str1);//参数为字符串或字符串指定元素地址--->一次只能输出一个字符串,且自动添加换行符。
////	//puts（）遇'\0'结束
////
////	//gets()函数-->读取整行输入，直至遇到换行符
////	char words[11];
////	puts("enter a string,please.");
////	gets(words);//典型用法
////	//不幸的gets（）函数，只有一个参数，无法检测输入是否越界（缓冲区溢出）。-->只知道数组的起始点，不知道数组有多少元素。
////	printf("%s\n", words);
////	/*C11标准摒弃了gets()函数*/
////	
////	//gets()的替代品-->fgets()
////	/*第二个参数将读入字符的最大数量（包括回车）*/
////	printf("请输入：");
////	fgets(words,10,stdin);//和gets()的另外一个不同为，fgets（）会读入换行符放在字符串中。
////	/*第三个参数指明要读入的文件，如果从键盘读取，则输入stdin*/
////	printf("%s\n",words);//words中含有换行符
////
////	//fputs()函数的第二个参数指明它要写入的文件，如果要显示在计算机显示器上，则输入stdout
////	fputs(words, stdout);
////	/*
////		fgets()和gets()函数的另一个区别，fgets()不会在输出字符串末尾加上换行符。
////	*/
////	//如何处理掉换行符？  找到它，然后替换成'\0'
////	fputs(words, stdout);
////	int i=0;
////	while (words[i] != '\n')
////	{
////		i++;
////	}
////	words[i] = '\0';
////	fputs(words, stdout);
////
////	//如何丢弃多出的字符？
////	while (getchar() != '\n')
////		continue;
////
////	//strlen()函数
////	printf("words的长度为%d\n", strlen(words));
////
//	//strcat()函数,strncat()函数
//	//char m[10],n[10];
//	//printf("请输入第一个字符串的值：");
//	//fgets(m, 5, stdin);
//	//printf("请输入第二个字符串的值：");
//	//fgets(n, 5, stdin);
//	//int i = 0;
//	//while (m[i]!='\n')
//	//{
//	//	i++;
//	//}
//	//m[i] = '\0';
//	////strcat(m, n);
//	//strncat(m,n,2);//第三个参数指定拼接的字符串长度
//	//fputs(n,stdout);
//	//fputs(m,stdout);
//
//	//常量字符串
//	//int* p = "hello";
//	//*p="ss";不能修改   -->字符常量区
//
//	//常量字符串初始化字符数组
//	//char str[] = "hello";//自带'\0',千万别越界！   -->字符常量区
//	//str[1] = 'w';//修改的栈区中copy的那一份，字符常量区的那份不变。
//	//fputs(str, stdout);
//
//	////字符数组的赋值
//	////字符数组定义完，不能再直接的进行赋值；利用循环。
//	//char* p = "world";
//	//char str1[] = "woshi";
//	//for (int i=0; *p!='\0'; p++)
//	//{
//	//	str[i] = *p;
//	//	i++;
//	//}
//	//fputs(str, stdout);
//
//	////strcpy()函数/strcpy_s()
//	//strcpy(str,str1);//第一个参数要足够大
//	//fputs(str, stdout);
//	//strcpy_s(str, 6, str1);//6指定的大小是str
//	//fputs(str, stdout);
//	//char str2[] = "sbsb";
//	////strncpy()函数和strncpy_s()函数
//	//strncpy(str, str2, 2);//纯替换
//	//strncpy_s(str, 5, str2, 4);
//	//printf("\n\n");
//	//fputs(str, stdout);
//	//scanf();将空格作为分隔符，不读入。%s；
//
//	//strcmp()函数，一个一个比大小（比对应的ASCII码），与strncmp()函数，第三个参数设置比较的个数；
//	//char str[] = "hello";
//	//char str1[] = "hellw";
//	//int a=strcmp(str, str1);//前大，则返回值大于0；后大则返回值小于0；
//	//printf("%d\n", a);
//
//	//再探strcat()函数/strncat
//	//char str[20] = "abc";
//	//strcat(str, "def");
//	//fputs(str, stdout);
//	//strncat(str,"ghi",2);
//	//fputs(str, stdout);
//
//	//atoi()与itoa()  -->整数与字符间的转换
//	printf("%d",atoi("1234"));
//	char s[10] = {0};
//	_itoa(16, s, 16);
//	fputs(s, stdout);
//	char st[20];
//	
//	//sprintf()函数
//	sprintf(st, "%c,%d,%f",'a',12,23.3);//不往控制台上输出，将数据转换成字符串，传入st。
//	fputs(st, stdout);
//
//	//字符串数组与二维字符数组
//	char* r[3] = { "sd","fd","gf" };//字符串数组-->本质-->指针数组
//	r[0] = "er";//指向新的字符串
//
//	//*r[1] = "sd";错误操作-->试图改变常量字符串
//	//printf("\n%s\n", *r[1]);错误操作
//
//	printf("%s\n", r[0]);
//	char k[2][3] = { {"mm"},{"vv"} };//二维字符数组
//
//	system("pause");
//	return 0;
//}