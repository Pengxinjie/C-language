//#define _CRT_SECURE_NO_WARNINGS
////�ṹ����
//#include<stdio.h>
//#include<stdlib.h>
//#define TSIZE 45   //����Ƭ���������С
//#define FMAX 5     //��������
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
//char* s_gets(char str[], int lim)//���fgets�ĺ���---->��'\n'�ַ�ɾ����
//{
//	int* ret_val = fgets(str, lim, stdin);
//	int *find;
//	if (ret_val)
//	{
//		find = strchr(str, '\n');//strchr()������Ѱ�ҵ�һ�η��ֵڶ����������ַ���������ָ�롣
//		*find = '\0';
//	}
//	return ret_val;
//}