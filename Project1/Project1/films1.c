//#define _CRT_SECURE_NO_WARNINGS
////结构数组
//#include<stdio.h>
//#include<stdlib.h>
//#define TSIZE 45   //储存片名的数组大小
//#define FMAX 5     //储存上限
//#include<string.h>
//
//struct film {
//	char title[TSIZE];
//	int rating;
//};
//
//char* s_gets(char str[], int lim);
//
//int main(void)
//{
//	struct film movies[FMAX];
//	int i = 0;
//	int j;
//	puts("Enter first movie title:");
//	while (i < FMAX && s_gets(movies[i].title, TSIZE) != NULL
//		&& movies[i].title[0] != '\0')
//	{
//		puts("Enter your rating<0-10>:");
//		scanf("%d", &movies[i++].rating);
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//		puts("Enter your next movie title(empty line to stop):");
//	}
//	if (0 == i)
//	{
//		printf("Not data enter.");
//	}
//	else {
//		printf("Here is the movie list:\n");
//	}
//
//	for (int j = 0; j < i; j++)
//	{
//		printf("movie:%s,rating:%d\n",movies->title,movies->rating);
//	}
//
//	system("pause");
//	return 0;
//}
//
//char* s_gets(char str[], int lim)//替代fgets的函数---->将'\n'字符删掉。
//{
//	int* ret_val = fgets(str, lim, stdin);
//	int *find;
//	if (ret_val)
//	{
//		find = strchr(str, '\n');//strchr()函数，寻找第一次发现第二个参数的字符，并返回指针。
//		*find = '\0';
//	}
//	return ret_val;
//}