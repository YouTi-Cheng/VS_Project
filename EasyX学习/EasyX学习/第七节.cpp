#include<stdio.h>
#include<easyx.h>
//#include<graphics.h>
#include<time.h>


int main()
{
	initgraph(800, 800, EX_SHOWCONSOLE);
	setbkcolor(RGB(195, 195, 195));
	cleardevice();

	////����ͼƬ����
	//IMAGE img_mm;
	////����ͼƬ
	////1.����·��
	////loadimage(&img_mm,"D:\\Tools\\Visual_Studio2022\\VisualStudioProject\\EasyXѧϰ\\EasyXѧϰ\\assets\\��Ů.jpg");
	////���·��
	//loadimage(&img_mm, "assets\\��Ů.jpg",270,480);
	////���ͼƬ
	//putimage(300, 0, &img_mm);



	//����
	// ��֡��ͼ����
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

	////��ʼ��
	//int index = 0;
	//int frames = 11;
	//int speed = 50;
	//while (true)
	//{
	//	startFrame = clock();		//��¼��ʼʱ��
	//	BeginBatchDraw();			//����ͼ���ְ�������ֹ����
	//	cleardevice();
	//	putimage(0, 0, img_blast + index);
	//	EndBatchDraw();
	//	index = (clock()/speed)%frames;
	//	frameTime = clock() - startFrame;	//���
	//	if (frameDelay - frameTime > 0)
	//	{
	//		Sleep(frameDelay - frameTime);
	//	}
	//}

	
	//�������
	IMAGE img_sheet;
	int frames = 8;		//֡��
	int imgWide =1472 / frames;		//ÿ֡�Ŀ��
	int imgHigh = 325;	//ÿ֡�ĸ߶�
	int index = 4;		//��ͼ�����
	int speed = 200;	//���ٺ����л�һ��

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