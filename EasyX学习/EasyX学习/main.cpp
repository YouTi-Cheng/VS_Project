#include<stdio.h>
#include<easyx.h>
#include<graphics.h>


//������Ϣ�ṹ�����
ExMessage msg = { 0 };

//����ͼ��
void drawShape()
{

}

//�����ı�
void drawText()
{
	//��������
	printf("����˧");
	settextcolor(BLACK);
	settextstyle(32,0,"΢���ź�");
	outtextxy(320,240,"����˧");
	int score=12;
	char str[50] = "";
	sprintf_s(str, "Score:%d", score);
	outtextxy(320, 200, str);
}
void centerText()
{
	//���־��е�ʵ��
	int rx = 30;
	int ry = 380;
	int rw = 200;
	int rh = 60;
	setfillcolor(BLUE);
	fillrectangle(rx,ry,rx+rw,ry+rh);

	//��������
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);
	char str[] = "������";
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

//��ť
bool button(int x, int y, int w, int h, const char* text)
{
	//���ư�ť
	if (inArea(msg.x, msg.y, x, y, w, h))
	{
		settextcolor(RED);
	}
	else {
		setfillcolor(RGB(255, 92, 144));
	}
	fillroundrect(x, y, x + w, y + h,5,5);
	//���ư�ť�ı�
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
	//����һ��ͼ�δ���
	initgraph(640,480,EX_SHOWCONSOLE|EX_DBLCLKS);
	//���ô��ڵı�����ɫ
	setbkcolor(RGB(255,221,125));
	//ʹ�õ�ǰ����ɫ��ջ�ͼ�豸
	cleardevice();

	drawShape();
	drawText();
	centerText();

	//����һ��С�������
	int x = 50;
	int y = 50;
	int r = 20;

	//����С��
	setfillcolor(RED);
	solidcircle(x, y, r);

	while (true)
	{
		if (peekmessage(&msg, EX_MOUSE))
		{
			//switch (msg.message)
			//{
			//case WM_LBUTTONDOWN:	//�������
			//	printf("���������� pos(%d,%d)\n",msg.x,msg.y);
			//	break;
			//case WM_RBUTTONDOWN:	//�Ҽ�����
			//	printf("����Ҽ�����\n");
			//	break;
			//case WM_MBUTTONDOWN:	//�м�����
			//	printf("����м�����\n");
			//	break;
			//case WM_MOUSEWHEEL:		//���ֹ���
			//	printf("���ֹ��� dir(%d)\n",msg.wheel);
			//	break;
			//case WM_LBUTTONDBLCLK:	//���˫��
			//	printf("���˫��\n");
			//	break;
			//default:
			//	break;
			//}
			//if (msg.message == WM_LBUTTONDOWN)
			//{
			//	printf("����������\n");
			//}
		}

		//˫�����ͼ
		BeginBatchDraw();

		//�жϰ�ť�Ƿ񱻵��
		if (button(20, 20, 150, 35, "Start Game"))
		{
			printf("Start Game");
		}
		EndBatchDraw();
	}



	//��ֹ����
	getchar();
	return 0;
}