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

	//画圆
	circle(100, 100, 10);


	//while (true)
	//{
	//	startTime = clock();
	//	sprintf_s(str, "Score:%d", score++);
	//	settextcolor(BLACK);
	//	
	//	//双缓冲防止闪屏
	//	BeginBatchDraw();
	//	cleardevice();	//用设置的背景颜色填充整个窗口
	//	outtextxy(20, 20, str);

	//	EndBatchDraw();

	//	freamTime = clock() - startTime;	//执行后-执行前
	//	//cout << freamTime;
	//	if (freamTime > 0)
	//	{
	//		Sleep(FPS - freamTime);
	//	}
	//	//getchar();
	//}
	return 0;
}