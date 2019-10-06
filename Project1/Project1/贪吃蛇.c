////制作思路：
////1.纯C语言
////2.封面
////3.显示背景
////4.随机位置显示一条蛇
////5.蛇动起来，直线动
////6.加入方向键
////7.蛇死亡判断
////8.随机显示新食物
////9.蛇变长
////10.计分
//
//#include<stdio.h>
//#include<stdlib.h>
//
//#include<Windows.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")  //PlaySound 专属三连
//
//void FirstPage(void)//显示首页函数
//{
//	printf("\n\n\n\n\n\n\n");
//	printf("\t\t\t\t  《欢迎进入贪吃蛇世界！》\n");
//	printf("\t\t\t\t  《按空格键开始游戏》\n");
//	printf("\t\t\t\t  《w a s d 控制蛇的方向》\n");
//}
//
////播放音乐
//void MyPlaySound(void)
//{
//	PlaySound("周二珂 - 告白气球.wav",NULL,SND_FILENAME | SND_ASYNC);//1.文件绝对路径2.NULL3.SND_FILENAME | SND_ASYNC
//}
//
//int main(void)
//{
//	FirstPage();//显示首页
//	MyPlaySound();
//
//	system("pause");
//	return 0;
//}