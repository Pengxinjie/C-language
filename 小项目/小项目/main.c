//����˼·��
//1.��C����
//2.����
//3.��ʾ����
//4.���λ����ʾһ����
//5.�߶�������ֱ�߶�
//6.���뷽���
//7.�������ж�
//8.�����ʾ��ʳ��
//9.�߱䳤
//10.�Ʒ�

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")  //PlaySound ר������

#include "head.h"

void FirstPage(void)//��ʾ��ҳ����
{
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t  ����ӭ����̰�������磡��\n");
	printf("\t\t\t\t  �����ո����ʼ��Ϸ��\n");
	printf("\t\t\t\t  ��w a s d �����ߵķ���\n");
}

void Text(void)
{
	while (1)//
	{	
		char c;
		c = _getch();//ֱ�����룬����س���  �����ַ������ڿ���̨����ʾ��
		if (c == ' ')
			break;
	}
}


void MyStopMusic(void)
{
	PlaySound(NULL, 0, 0);
}

void MyPlaySound(void)//��������

{
	PlaySound(L"�ܶ��� - �������.wav", NULL, SND_FILENAME | SND_ASYNC);//1.�ļ�����·��2.NULL3.SND_FILENAME | SND_ASYNC
}//�ǵü�L������ɵ���ˡ�

int main(void)
{

	FirstPage();//��ʾ��ҳ
	
	MyPlaySound();	//��������

	Text();	//ʶ��ո�

	MyStopMusic();	//ֹͣ����

	system("cls");//�������̨

	//JieMian();//��Ϸ����

	_B();
	system("pause");//��ͣ
	return 0;
}