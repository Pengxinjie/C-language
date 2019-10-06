//制作思路：
//1.纯C语言
//2.封面
//3.显示背景
//4.随机位置显示一条蛇
//5.蛇动起来，直线动
//6.加入方向键
//7.蛇死亡判断
//8.随机显示新食物
//9.蛇变长
//10.计分

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")  //PlaySound 专属三连

#include "head.h"

void FirstPage(void)//显示首页函数
{
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t  《欢迎进入贪吃蛇世界！》\n");
	printf("\t\t\t\t  《按空格键开始游戏》\n");
	printf("\t\t\t\t  《w a s d 控制蛇的方向》\n");
}

void Text(void)
{
	while (1)//
	{	
		char c;
		c = _getch();//直接输入，无需回车。  读入字符但不在控制台上显示。
		if (c == ' ')
			break;
	}
}


void MyStopMusic(void)
{
	PlaySound(NULL, 0, 0);
}

void MyPlaySound(void)//播放音乐

{
	PlaySound(L"周二珂 - 告白气球.wav", NULL, SND_FILENAME | SND_ASYNC);//1.文件绝对路径2.NULL3.SND_FILENAME | SND_ASYNC
}//记得加L，别再傻逼了。

int main(void)
{

	FirstPage();//显示首页
	
	MyPlaySound();	//播放音乐

	Text();	//识别空格

	MyStopMusic();	//停止播放

	system("cls");//清理控制台

	//JieMian();//游戏界面

	_B();
	system("pause");//暂停
	return 0;
}