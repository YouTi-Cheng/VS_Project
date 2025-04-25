#include<stdio.h>
#include<easyx.h>
#include<graphics.h>


//定义消息结构体变量
ExMessage msg = { 0 };

//绘制图形
void drawShape()
{

}

//输入文本
void drawText()
{
	//绘制文字
	printf("我最帅");
	settextcolor(BLACK);
	settextstyle(32,0,"微软雅黑");
	outtextxy(320,240,"我最帅");
	int score=12;
	char str[50] = "";
	sprintf_s(str, "Score:%d", score);
	outtextxy(320, 200, str);
}
void centerText()
{
	//文字居中的实现
	int rx = 30;
	int ry = 380;
	int rw = 200;
	int rh = 60;
	setfillcolor(BLUE);
	fillrectangle(rx,ry,rx+rw,ry+rh);

	//绘制文字
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);
	char str[] = "我想你";
	int hSpace = (rw - textwidth(str)) / 2;
	int vSpace = (rh - textheight(str)) / 2;
	outtextxy(rx + hSpace, ry + vSpace, str);
}

bool inArea(int mx, int my, int x, int y, int w, int h)
{
	if (mx > x && mx<x + w && my>y && my < y + h)
	{
		return true;
	}
	return false;
}

//按钮
bool button(int x, int y, int w, int h, const char* text)
{
	//绘制按钮
	if (inArea(msg.x, msg.y, x, y, w, h))
	{
		settextcolor(RED);
	}
	else {
		setfillcolor(RGB(255, 92, 144));
	}
	fillroundrect(x, y, x + w, y + h,5,5);
	//绘制按钮文本
	int hSpace = (w - textwidth(text)) / 2;
	int vSpace = (h - textheight(text)) / 2;


	outtextxy(x + hSpace, y + vSpace, text);
	if (msg.message == WM_LBUTTONDOWN&&inArea(msg.x,msg.y,x,y,w,h))
	{
		return true;
	}
	return false;
}

int main()
{
	//创建一个图形窗口
	initgraph(640,480,EX_SHOWCONSOLE|EX_DBLCLKS);
	//设置窗口的背景颜色
	setbkcolor(RGB(255,221,125));
	//使用当前背景色清空绘图设备
	cleardevice();

	drawShape();
	drawText();
	centerText();

	//定义一个小球的属性
	int x = 50;
	int y = 50;
	int r = 20;

	//绘制小球
	setfillcolor(RED);
	solidcircle(x, y, r);

	while (true)
	{
		if (peekmessage(&msg, EX_MOUSE))
		{
			//switch (msg.message)
			//{
			//case WM_LBUTTONDOWN:	//左键按下
			//	printf("鼠标左键按下 pos(%d,%d)\n",msg.x,msg.y);
			//	break;
			//case WM_RBUTTONDOWN:	//右键按下
			//	printf("鼠标右键按下\n");
			//	break;
			//case WM_MBUTTONDOWN:	//中键按下
			//	printf("鼠标中键按下\n");
			//	break;
			//case WM_MOUSEWHEEL:		//滚轮滚动
			//	printf("滚轮滚动 dir(%d)\n",msg.wheel);
			//	break;
			//case WM_LBUTTONDBLCLK:	//左键双击
			//	printf("左键双击\n");
			//	break;
			//default:
			//	break;
			//}
			//if (msg.message == WM_LBUTTONDOWN)
			//{
			//	printf("鼠标左键按下\n");
			//}
		}

		//双缓冲绘图
		BeginBatchDraw();

		//判断按钮是否被点击
		if (button(20, 20, 150, 35, "Start Game"))
		{
			printf("Start Game");
		}
		EndBatchDraw();
	}



	//防止闪退
	getchar();
	return 0;
}