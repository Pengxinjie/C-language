//#include<stdio.h>
//#include<stdlib.h>
//
////背景：游戏海岛奇兵中，每个兵种升一级，各方面性能提升约10％，此程序用于计算已知一级兵种数据推算任意等级兵种的数据。
//
//int main(void)
//{
//	printf("欢迎使用PXJ小天才设计的程序！\n");
//	double a = 1.1;//每次升级兵种性能提升百分之十
//	double b ;//血量
//	double c ;//每秒伤害值
//	int d=0;//兵种等级
//	int bingzhong;
//	while (1)
//	{
//		
//		printf("请输入您想要查询的兵种(1步兵，2妹子，3退出本程序)：");
//	step:
//		scanf_s("%d", &bingzhong);
//		if (bingzhong == 1)
//		{
//			b = 140.0;//步兵初始血量
//			c = 30.0;//步兵初始每秒伤害值
//			printf("请输入您想查询的步兵等级：");
//			scanf_s("%d", &d);
//
//			int i = d - 1;
//			for (; i > 0; i--)
//			{
//				b = b * a;
//				c = c * a;
//			}
//			printf("%d级的步兵血量为：%.2lf\n", d, b);
//			printf("   每秒伤害值为：%.2lf\n", c);
//		}
//		else if (bingzhong == 2)
//		{
//			b = 50.0;//妹子初始血量
//			c = 80.0;//妹子初始每秒伤害值
//			printf("请输入您想查询的妹子等级：");
//			scanf_s("%d", &d);
//
//			int i = d - 1;
//			for (; i > 0; i--)
//			{
//				b = b * a;
//				c = c * a;
//			}
//			printf("%d级的妹子血量为：%.2lf\n", d, b);
//			printf("   每秒伤害值为：%.2lf\n", c);
//		}
//		else if (bingzhong == 3)
//		{
//			break;
//		}
//	
//		else
//		{
//			printf("输入无效数字！请重新输入(1步兵，2妹子,3退出本程序)：");
//			goto step;
//		}
//		
//	
//	}
//	printf("感谢使用本程序！\n");
//	system("pause");
//	return 0;
//}