#include"object.h"





int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//窗口绘制
	initgraph(WCELL*SIZE, HCELL*SIZE, EX_SHOWCONSOLE);
	setbkcolor(BLACK);
	cleardevice();

	//初始化地图
	Map m;
	m.showMap();

	//初始化墙对象
	Wall w(m);

	//初始化蛇对象

	//初始化食物对象

	//游戏图片
	IMAGE img[6] = {0};
	//加载图片
	for (int i = 0; i < 6; i++)
	{
		char  imgName[100] = { 0 };
		sprintf_s(imgName, "images/%d.png", i);
		loadimage(img + i, imgName, SIZE, SIZE);
	}

	while (true)
	{
		cleardevice();

		//记录开始时间


		//图片前
		BeginBatchDraw();
	
		//贴图片

		//画墙

		
		//判断运行时间
		//在判断时间内进行接受键盘信息


		////蛇运动

		//蛇吃食物


		//游戏判断


		//图片后
		EndBatchDraw();



	}

	return 0;
}
