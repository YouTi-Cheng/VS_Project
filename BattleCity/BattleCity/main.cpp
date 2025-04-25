#include"object.h"



int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//窗口绘制
	initgraph(ROWS* TILE_SIZE, COLS* TILE_SIZE, EX_SHOWCONSOLE);
	setbkcolor(RGB(182,154,97));
	cleardevice();

	while (true)
	{
		cleardevice();

		////记录开始时间
		//int startTime = clock();

		//图片前
		BeginBatchDraw();

		//图片后
		EndBatchDraw();



	}

}