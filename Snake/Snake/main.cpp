#include"object.h"





int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//���ڻ���
	initgraph(WCELL*SIZE, HCELL*SIZE, EX_SHOWCONSOLE);
	setbkcolor(BLACK);
	cleardevice();

	//��ʼ����ͼ
	Map m;
	m.showMap();

	//��ʼ��ǽ����
	Wall w(m);

	//��ʼ���߶���

	//��ʼ��ʳ�����

	//��ϷͼƬ
	IMAGE img[6] = {0};
	//����ͼƬ
	for (int i = 0; i < 6; i++)
	{
		char  imgName[100] = { 0 };
		sprintf_s(imgName, "images/%d.png", i);
		loadimage(img + i, imgName, SIZE, SIZE);
	}

	while (true)
	{
		cleardevice();

		//��¼��ʼʱ��


		//ͼƬǰ
		BeginBatchDraw();
	
		//��ͼƬ

		//��ǽ

		
		//�ж�����ʱ��
		//���ж�ʱ���ڽ��н��ܼ�����Ϣ


		////���˶�

		//�߳�ʳ��


		//��Ϸ�ж�


		//ͼƬ��
		EndBatchDraw();



	}

	return 0;
}
