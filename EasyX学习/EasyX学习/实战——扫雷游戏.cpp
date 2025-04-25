#include<stdio.h>
#include<stdlib.h>
#include<easyx.h>
#include<time.h>
#include<graphics.h>
#define ROW 10
#define COL 10
#define SIZE 40



//��Ϸ��ʼ��
void initMap(int map[ROW][COL]);
//����ͼƬ
void loadImg(IMAGE img[]);
//��ʾ����
void showMap(int map[ROW][COL]);
//��ͼƬ
void showGraph(int map[ROW][COL], IMAGE img[]);
//������
void mouseEvent(int map[ROW][COL]);
//����
void openNull(int map[ROW][COL],int r,int c);
//�����ж�
void judge(int map[ROW][COL], int r, int c);
//�Ƿ���Ϸ����
void isOver(int map[ROW][COL]);


int main()
{
	//��Ϸҳ��
	initgraph(ROW * SIZE, COL * SIZE, EX_SHOWCONSOLE);
	IMAGE img[14];
	//ɨ����Ϸ����
	int map[ROW][COL] = { 0 };
	

	//��Ϸ��ʼ��
	initMap(map);

	loadImg(img);

	showMap(map);
	
	while (true)
	{
		//�ж���Ϸ�Ƿ����
		isOver(map);
		//������
		mouseEvent(map);
		//��ͼƬ
		showGraph(map, img);
	}


	return 0;
}

//��ʾ����
void showMap(int map[ROW][COL])
{
	//��ʾ����
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%3d", map[i][j]);
		}
		printf("\n");
	}
	printf("\n");


}
//��Ϸ��ʼ��
void initMap(int map[ROW][COL])
{
	//�������
	memset(map, 0, ROW * COL * sizeof(map));

	//����������
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10;)
	{
		int r = rand() % ROW;
		int c = rand() % COL;

		if (map[r][c] == 0)
		{
			map[r][c] = -1;
			i++;
		}
	}

	//����Ϊ���ĵľŹ����ֵ+1
	//���α�������
	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			if (map[i][j] == -1)	//�ҵ���
			{
				for (int r = i - 1; r <= i + 1; r++)
				{
					for (int c = j - 1; c <= j + 1; c++)
					{
						if ((r >= 0 && r < ROW && c >= 0 && c < COL) && map[r][c] != -1)	//�ж��Ƿ�Խ��
						{
							map[r][c]++;
						}
					}
				}
			}
		}
	}

	//���ܸ���
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			map[i][j] += 20;
		}
	}
}
//����ͼƬ
void loadImg(IMAGE img[])
{
	//����ͼƬ
	for (int i = 0; i < 14; i++)
	{
		char  imgName[100] = { 0 };
		sprintf_s(imgName, "images/%d.gif", i);
		loadimage(img + i, imgName, SIZE, SIZE);
	}
}
//��ͼƬ
void showGraph(int map[ROW][COL], IMAGE img[])
{
	//����������ʾͼƬ
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			//������
			if (map[i][j] <= 8 && map[i][j] >= 0)
			{
				putimage(SIZE * j, SIZE * i, img + map[i][j]);
			}
			else if (map[i][j] == -1)	//	����
			{
				putimage(SIZE * j, SIZE * i, img + 11);
			}
			else if (map[i][j] >= 19 && map[i][j] <= 28)	//���ܸ���
			{
				putimage(SIZE * j, SIZE * i, img + 9);
			}
			else if (map[i][j] >=29&& map[i][j]<=38)//����
			{
				putimage(SIZE * j, SIZE * i, img + 10);
			}
			else if (map[i][j] >= 39 && map[i][j] <= 48)//���ʺ�
			{
				putimage(SIZE * j, SIZE * i, img + 12);
			}
			else if (map[i][j] == 13)//����
			{
				putimage(SIZE * j, SIZE * i, img + 13);
			}
		}
	}
}
//������
void mouseEvent(int map[ROW][COL])
{
	//�������
	ExMessage msg = { 0 };
	if (peekmessage(&msg, EX_MOUSE))
	{
		//
		printf("������");
		//������ͼƬ
		if (msg.message == WM_LBUTTONDOWN)
		{
			int r = msg.y / SIZE;
			int c = msg.x / SIZE;
			//�ı�δ�����㷽�����������ֵ
			if (map[r][c] >= 19 && map[r][c] <= 28)
			{
				map[r][c] -= 20;				
			}
			//��������
			openNull(map, r, c);
			//�����ж�
			judge(map, r, c);
			showMap(map);
		}
		else if (msg.message == WM_RBUTTONDOWN)//�Ҽ�������ߴ�
		{
			int r = msg.y / SIZE;
			int c = msg.x / SIZE;
			//�ı�δ�����㷽�����������ֵ
			if (map[r][c] >= 19 && map[r][c] <= 28)//����״̬
			{
				map[r][c] += 10;
			}
			else if (map[r][c] >= 29 && map[r][c] <= 38)//����״̬
			{
				map[r][c] += 10;
			}
			else if (map[r][c] >= 39 && map[r][c] <= 48)//�ʺ�״̬
			{
				map[r][c] -= 20;
			}
			showMap(map);
		}

	}
}
//����
void openNull(int map[ROW][COL],int r,int c)
{
	if (map[r][c] == 0)
	{
		for (int i = r - 1; i <= r + 1; i++)
		{
			for (int j = c - 1; j <= c + 1; j++)
			{
				//δ������λ�ñ���
				if ((i >= 0 && i <= ROW && j >= 0 && j <= COL) && map[i][j] > 19 && map[i][j] <= 28)
				{
					map[i][j] -= 20;
					openNull(map, i, j);
				}
			

	
			}


		}
	}
}
//�����ж�
void judge(int map[ROW][COL],int r,int c)
{
	//����
	if (map[r][c] == -1)
	{
		//�������״�
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				if (map[i][j] == 19 || map[i][j] == 29 || map[i][j] == 39)
				{
					map[i][j] = -1;
				}
			}
		}
		map[r][c] = 13;
	}
	//�ҳ�������
	//����һ�飬������ǵĸ��ӻ��߲�����ߴ��ʺŵĸ��Ӷ����ף���ʤ��
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if ((map[i][j]>19&& map[i][j]<=28)||(map[i][j] > 29 && map[i][j] <= 38)|| map[i][j] > 39 && map[i][j] <= 48)//��δ��/���ʺ�/����ķ��׸���
			{
				return;
			}
		}
	}
	//ʤ���������ײ��Ϻ���
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] == 19  || map[i][j] == 39 )//������
			{
				map[i][j] = 29;
			}
		}
	}
}
//�Ƿ���Ϸ����
void isOver(int map[ROW][COL])
{
	//����һ�ο���û��ֵΪ13,��13��Ϸ��������¼�������׵ĸ�����������������Ϸʤ��
	int num = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] == 13)
			{
				//������
				int ret = MessageBox(GetHWnd(), "��ȵ����ˣ��Ƿ�����һ�Σ�", "��ʾ", MB_OKCANCEL);
				if (ret == IDOK)
				{
					initMap(map);
				}
				else {
					exit(0);
				}
			}
			else if (map[i][j] == 29)
			{
				num++;
			}
		}
	}
	if (num == 10)
	{
		//ʤ��������
		int ret = MessageBox(GetHWnd(), "���ҵ����е��ף���ʤ���Ƿ�����һ�Σ�", "��ʾ", MB_OKCANCEL);
		if (ret == IDOK)
		{
			initMap(map);
		}
		else {
			exit(0);
		}
	}

}
