#include<iostream>
#include<stdio.h>
#include<easyx.h>
#include<time.h>
using namespace std;

int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	setbkmode(TRANSPARENT);

	//��Բ
	circle(100, 100, 10);


	//while (true)
	//{
	//	startTime = clock();
	//	sprintf_s(str, "Score:%d", score++);
	//	settextcolor(BLACK);
	//	
	//	//˫�����ֹ����
	//	BeginBatchDraw();
	//	cleardevice();	//�����õı�����ɫ�����������
	//	outtextxy(20, 20, str);

	//	EndBatchDraw();

	//	freamTime = clock() - startTime;	//ִ�к�-ִ��ǰ
	//	//cout << freamTime;
	//	if (freamTime > 0)
	//	{
	//		Sleep(FPS - freamTime);
	//	}
	//	//getchar();
	//}
	return 0;
}