#include"object.h"



int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//���ڻ���
	initgraph(ROWS* TILE_SIZE, COLS* TILE_SIZE, EX_SHOWCONSOLE);
	setbkcolor(RGB(182,154,97));
	cleardevice();

	while (true)
	{
		cleardevice();

		////��¼��ʼʱ��
		//int startTime = clock();

		//ͼƬǰ
		BeginBatchDraw();

		//ͼƬ��
		EndBatchDraw();



	}

}