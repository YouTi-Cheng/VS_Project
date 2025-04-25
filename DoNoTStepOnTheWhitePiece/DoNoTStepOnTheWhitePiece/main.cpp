#include<stdio.h>
#include<easyx.h>
#include<string>
#include<time.h>
using namespace std;

//����߶�
#define TITLE 100

//�׿��120����150
#define PIECE_W 120
#define PIECE_H 150

//��Ϸ���ڴ�С
int width = 480;
int height = 700;

//��Ϸ����
int score = 0;

//��ʱ
int startTime = 0;

//������� ÿ��1��3�� 4��
int flag[4] = {0};

//��ʾ����
void showDate(int flag[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", flag[i]);
	}
}

//���ݳ�ʼ��
void init(int flag[]);

//�������ݻ��ƺڰ׷���
void drawPlece(int flag[]);

//�ظ�����
void changeDate(int flag[]);

//���������Ӧ
void clickPlece(int flag[], ExMessage msg);

int main()
{
	//�����������
	srand((unsigned int)time(NULL));

	//������Ϸ����
	initgraph(width, height, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();

	//���ݳ�ʼ��
	init(flag);

	//��ʾ�ڰ׷���ͱ߿�
	showDate(flag);
	ExMessage msg = {0};

	//��ʼ˫�����ͼ
	BeginBatchDraw();

	while (true)
	{
		//�������ݻ��ƺڰ׷���
		drawPlece(flag);
		clickPlece(flag,msg);

		//��Ϸˢ��
		FlushBatchDraw();
	}
	//�ر�˫�����ͼ
	EndBatchDraw();

	//�ر���Ϸ����
	closegraph();

	return 0;
}

//���ݳ�ʼ��
void init(int flag[])
{
	score = 0;
	startTime = 0;
	for (int i = 0; i < 4; i++)
	{
		flag[i] = rand() % 4;
	}
}

//�������ݻ��ƺڰ׷���
void drawPlece(int flag[])
{
	cleardevice();
	//������Ϸ����
	settextcolor(BLACK);
	settextstyle(50, 0, "΢���ź�");
	char str[60] = "��Ȱ׿�";
	outtextxy((getwidth() - textwidth(str)) / 2, 0, str);

	//�����Ϸʱ��ͷ���
	char str2[50] = {};
	sprintf_s(str2, "ʱ��:%d  ����:%d", startTime?((clock()-startTime)/1000):0, score);
	settextstyle(25, 0, "΢���ź�");
	outtextxy((getwidth() - textwidth(str2)) / 2, 2 * textheight(str), str2);

	//��������
	setlinecolor(BLACK);
	for (int i = 0; i < 4; i++)
	{
		line(0, 100 + PIECE_H * i, getwidth(), 100 + PIECE_H * i);
	}
	for (int j = 0; j < 4; j++)
	{
		line(0 + PIECE_W * j, 100, 0 + PIECE_W * j, getheight());
	}
	//���ƺڿ�
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
				//�ı�����
				changeDate(flag);
			}//�������ķ���
			else {
				//������
				int ret = MessageBox(GetHWnd(), "��ȵ��˰׿飬�Ƿ����¿�ʼ��", "��ʾ", MB_OKCANCEL);
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

//�ظ�����
void changeDate(int flag[])
{
	//���θ���
	for (int i = 2; i >= 0; i--)
	{
		flag[i + 1] = flag[i];
	}
	//�����µ�����
	flag[0] = rand() % 4;
	score++;
	showDate(flag);
}