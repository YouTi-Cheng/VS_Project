#include<stdio.h>
#include<easyx.h>
#include<string>
#include<time.h>
using namespace std;

//标题高度
#define TITLE 100

//白块宽120，高150
#define PIECE_W 120
#define PIECE_H 150

//游戏窗口大小
int width = 480;
int height = 700;

//游戏分数
int score = 0;

//计时
int startTime = 0;

//方块设计 每行1黑3白 4列
int flag[4] = {0};

//显示数据
void showDate(int flag[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", flag[i]);
	}
}

//数据初始化
void init(int flag[]);

//根据数据绘制黑白方块
void drawPlece(int flag[]);

//重改数据
void changeDate(int flag[]);

//点击方块响应
void clickPlece(int flag[], ExMessage msg);

int main()
{
	//设置随机种子
	srand((unsigned int)time(NULL));

	//创建游戏窗口
	initgraph(width, height, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();

	//数据初始化
	init(flag);

	//显示黑白方块和边框
	showDate(flag);
	ExMessage msg = {0};

	//开始双缓冲绘图
	BeginBatchDraw();

	while (true)
	{
		//根据数据绘制黑白方块
		drawPlece(flag);
		clickPlece(flag,msg);

		//游戏刷新
		FlushBatchDraw();
	}
	//关闭双缓冲绘图
	EndBatchDraw();

	//关闭游戏窗口
	closegraph();

	return 0;
}

//数据初始化
void init(int flag[])
{
	score = 0;
	startTime = 0;
	for (int i = 0; i < 4; i++)
	{
		flag[i] = rand() % 4;
	}
}

//根据数据绘制黑白方块
void drawPlece(int flag[])
{
	cleardevice();
	//设置游戏标题
	settextcolor(BLACK);
	settextstyle(50, 0, "微软雅黑");
	char str[60] = "别踩白块";
	outtextxy((getwidth() - textwidth(str)) / 2, 0, str);

	//设计游戏时间和分数
	char str2[50] = {};
	sprintf_s(str2, "时间:%d  分数:%d", startTime?((clock()-startTime)/1000):0, score);
	settextstyle(25, 0, "微软雅黑");
	outtextxy((getwidth() - textwidth(str2)) / 2, 2 * textheight(str), str2);

	//绘制线条
	setlinecolor(BLACK);
	for (int i = 0; i < 4; i++)
	{
		line(0, 100 + PIECE_H * i, getwidth(), 100 + PIECE_H * i);
	}
	for (int j = 0; j < 4; j++)
	{
		line(0 + PIECE_W * j, 100, 0 + PIECE_W * j, getheight());
	}
	//绘制黑块
	for (int i = 0; i < 4; i++)
	{
		setfillcolor(BLACK);
		fillrectangle(0 + PIECE_W * flag[i], 100 + PIECE_H * i, PIECE_W + PIECE_W * flag[i], 100 + PIECE_H * (i + 1));
	}
}

void clickPlece(int flag[], ExMessage msg)
{
	if (peekmessage(&msg, EX_MOUSE))
	{
		if (msg.message == WM_LBUTTONDOWN)
		{
			if (startTime == 0)
			{
				startTime = clock();
			}
			if (msg.x >= flag[3] * 120 && msg.x <= (flag[3] + 1) * 120 && msg.y <= getheight() && msg.y >= getheight() - 150)
			{
				//改变数据
				changeDate(flag);
			}//点击错误的方块
			else {
				//跳弹窗
				int ret = MessageBox(GetHWnd(), "你踩到了白块，是否重新开始？", "提示", MB_OKCANCEL);
				if (ret == IDOK)
				{
					init(flag);
				}
				else {
					exit(0);
				}
			}
		}
	}
}

//重改数据
void changeDate(int flag[])
{
	//依次覆盖
	for (int i = 2; i >= 0; i--)
	{
		flag[i + 1] = flag[i];
	}
	//创建新的数据
	flag[0] = rand() % 4;
	score++;
	showDate(flag);
}