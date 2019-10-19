///*C Premier plus P71--P101 共30页（习题未做） */
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<limits.h>//可以找到一些明示常量，另外还有<float.h>
//
//int main(void)
//{
//	/*   4.2字符串简介
//	char name[40];
//	scanf("%s", name);
//	printf("%s\n", name);//P73 字符串的输入
//
//	printf("%zd\n", strlen(name));//%zd%zo 为sizeof的返回类型，对strlen（）函数同样适用  c99标准   
//	//strlen（）函数  参数为字符数组名/字符指针  返回字符数组的长度，包括空格和标点符号（除去去结尾的null字符）
//	//sizeof运算符把字符数组结尾的null字符也计算在内
//
//	//另外 sizeof和strlen（）的返回值通常为 unsigned和unsigned long
//
//	//sizeof 后若是类型则需要加（），如果是特定量则不需要，建议一直都加。
//	*/
//
//	/*   4.3c预处理器
//	宏-->编译时替换  也称明示常量
//	格式：#define 大写名 常量值
//
//	const限定符-->限定一个变量为只读，不可修改
//	
//	*/
//
//	/*   4.4 printf()与scanf()
//	简称I/O函数  相同点：都使用格式化字符串和参数列表
//	转换说明及打印输出结果表 P81
//	两个%可以打印出一个%
//	printf()的转换说明修饰符  P83
//	printf()输出错误则返回负值
//
//	一个printf（）函数打印较长字符串时分行
//	eg.	printf("%d",printf("%d\n", 
//		100000));
//	给字符串断行的三种方法：
//	1.使用\
//	eg.printf("%d",printf("%d \
//	\n", 
//		100000));
//	2.
//	eg.printf("%d",printf("%d "
//	"\n",
//		100000));
//	3.分多行写多个printf（）函数
//
//	使用scanf（）
//	转换说明符及修饰符 P93
//
//	*格式修饰符在scanf和printf中的作用		p95
//
//	*/
//
//	char a[10];
//	scanf("%s", a);
//	printf("%s\n", a);//只能读取一个单词
//
//	system("pause");
//	return 0;
//}