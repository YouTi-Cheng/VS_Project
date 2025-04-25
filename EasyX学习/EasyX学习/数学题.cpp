#include<stdio.h>
#include<easyx.h>

//创建一个小球
void creatBall(int x,int y,int r)	//圆出现的位置和半径
{
	setlinecolor(BLACK);
	circle(x, y, r);	//x,y是圆心位置
}


int main()
{
	//窗口建立
	initgraph(500, 500, EX_SHOWCONSOLE);
	//设置窗口颜色
	setbkcolor(WHITE);
	//用设置的背景颜色填充整个窗口
	cleardevice();

	//移动小球就是不断的创建小球
	//球的参数
	int x = 100;
	int y = 100;
	int r = 100;
	creatBall(x,y,r);
	//画正方形
	rectangle()

	//控制圆移动方向
	ExMessage msg = { 0 };	//初始化归零
	//不停的获取信息
	while (peekmessage(&msg, EX_KEY))
	{
		switch (msg.vkcode )	//msg的虚拟键码
		{
		case VK_UP:
			printf("向上按键");
		default:
			break;
		}
	}

	//防止程序退出
	getchar();
	return 0;
}