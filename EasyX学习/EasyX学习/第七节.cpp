#include<stdio.h>
#include<easyx.h>
//#include<graphics.h>
#include<time.h>


int main()
{
	initgraph(800, 800, EX_SHOWCONSOLE);
	setbkcolor(RGB(195, 195, 195));
	cleardevice();

	////定义图片变量
	//IMAGE img_mm;
	////加载图片
	////1.绝对路径
	////loadimage(&img_mm,"D:\\Tools\\Visual_Studio2022\\VisualStudioProject\\EasyX学习\\EasyX学习\\assets\\美女.jpg");
	////相对路径
	//loadimage(&img_mm, "assets\\美女.jpg",270,480);
	////输出图片
	//putimage(300, 0, &img_mm);



	//动画
	// 单帧多图动画
	//IMAGE img_blast[11];
	//char path[100] = { 0 };
	//for (int i = 0; i < 11;i++)
	//{
	//	sprintf_s(path, "assets/fire/blast%d.gif", i + 1);
	//	loadimage(img_blast + i, path);
	//}
	////loadimage(img_blast + 0, "assets/fire/blast1.gif");
	////loadimage(img_blast + 1, "assets/fire/blast2.gif");
	////loadimage(img_blast + 2, "assets/fire/blast3.gif");
	////loadimage(img_blast + 3, "assets/fire/blast4.gif");
	////loadimage(img_blast + 4, "assets/fire/blast5.gif");
	////loadimage(img_blast + 5, "assets/fire/blast6.gif");
	////loadimage(img_blast + 6, "assets/fire/blast7.gif");
	////loadimage(img_blast + 7, "assets/fire/blast8.gif");
	////loadimage(img_blast + 8, "assets/fire/blast9.gif");
	////loadimage(img_blast + 9, "assets/fire/blast10.gif");
	////loadimage(img_blast + 10, "assets/fire/blast11.gif");
	//putimage(0, 0, img_blast + 0);

	//const int frameDelay = 1000 / 60;
	//int startFrame = 0;
	//int frameTime = 0;

	////初始化
	//int index = 0;
	//int frames = 11;
	//int speed = 50;
	//while (true)
	//{
	//	startFrame = clock();		//记录开始时间
	//	BeginBatchDraw();			//将绘图部分包裹，防止跳闪
	//	cleardevice();
	//	putimage(0, 0, img_blast + index);
	//	EndBatchDraw();
	//	index = (clock()/speed)%frames;
	//	frameTime = clock() - startFrame;	//算出
	//	if (frameDelay - frameTime > 0)
	//	{
	//		Sleep(frameDelay - frameTime);
	//	}
	//}

	
	//精灵表动画
	IMAGE img_sheet;
	int frames = 8;		//帧数
	int imgWide =1472 / frames;		//每帧的宽度
	int imgHigh = 325;	//每帧的高度
	int index = 4;		//贴图的序号
	int speed = 200;	//多少毫秒切换一张

	while (true)
	{
		BeginBatchDraw();
		loadimage(&img_sheet, "assets/walk.png");
		putimage(0, 0, imgWide, imgHigh, &img_sheet, index * imgWide, 0);
		EndBatchDraw();

		index = (clock() / speed) % frames;
	}




	return 0;
}