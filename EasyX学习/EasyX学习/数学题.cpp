#include<stdio.h>
#include<easyx.h>

//����һ��С��
void creatBall(int x,int y,int r)	//Բ���ֵ�λ�úͰ뾶
{
	setlinecolor(BLACK);
	circle(x, y, r);	//x,y��Բ��λ��
}


int main()
{
	//���ڽ���
	initgraph(500, 500, EX_SHOWCONSOLE);
	//���ô�����ɫ
	setbkcolor(WHITE);
	//�����õı�����ɫ�����������
	cleardevice();

	//�ƶ�С����ǲ��ϵĴ���С��
	//��Ĳ���
	int x = 100;
	int y = 100;
	int r = 100;
	creatBall(x,y,r);
	//��������
	rectangle()

	//����Բ�ƶ�����
	ExMessage msg = { 0 };	//��ʼ������
	//��ͣ�Ļ�ȡ��Ϣ
	while (peekmessage(&msg, EX_KEY))
	{
		switch (msg.vkcode )	//msg���������
		{
		case VK_UP:
			printf("���ϰ���");
		default:
			break;
		}
	}

	//��ֹ�����˳�
	getchar();
	return 0;
}