#include<stdio.h>
#include<stdlib.h>
#include<easyx.h>
#include<time.h>
#include<graphics.h>
#define ROW 10
#define COL 10
#define SIZE 40



//游戏初始化
void initMap(int map[ROW][COL]);
//加载图片
void loadImg(IMAGE img[]);
//显示数据
void showMap(int map[ROW][COL]);
//贴图片
void showGraph(int map[ROW][COL], IMAGE img[]);
//鼠标操作
void mouseEvent(int map[ROW][COL]);
//爆开
void openNull(int map[ROW][COL],int r,int c);
//结束判断
void judge(int map[ROW][COL], int r, int c);
//是否游戏结束
void isOver(int map[ROW][COL]);


int main()
{
	//游戏页面
	initgraph(ROW * SIZE, COL * SIZE, EX_SHOWCONSOLE);
	IMAGE img[14];
	//扫雷游戏数据
	int map[ROW][COL] = { 0 };
	

	//游戏初始化
	initMap(map);

	loadImg(img);

	showMap(map);
	
	while (true)
	{
		//判断游戏是否结束
		isOver(map);
		//鼠标操作
		mouseEvent(map);
		//贴图片
		showGraph(map, img);
	}


	return 0;
}

//显示数据
void showMap(int map[ROW][COL])
{
	//显示数据
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
//游戏初始化
void initMap(int map[ROW][COL])
{
	//数组归零
	memset(map, 0, ROW * COL * sizeof(map));

	//设计随机种子
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

	//给雷为中心的九宫格的值+1
	//依次遍历找雷
	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			if (map[i][j] == -1)	//找到雷
			{
				for (int r = i - 1; r <= i + 1; r++)
				{
					for (int c = j - 1; c <= j + 1; c++)
					{
						if ((r >= 0 && r < ROW && c >= 0 && c < COL) && map[r][c] != -1)	//判断是否越界
						{
							map[r][c]++;
						}
					}
				}
			}
		}
	}

	//加密覆盖
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			map[i][j] += 20;
		}
	}
}
//加载图片
void loadImg(IMAGE img[])
{
	//加载图片
	for (int i = 0; i < 14; i++)
	{
		char  imgName[100] = { 0 };
		sprintf_s(imgName, "images/%d.gif", i);
		loadimage(img + i, imgName, SIZE, SIZE);
	}
}
//贴图片
void showGraph(int map[ROW][COL], IMAGE img[])
{
	//根据数据显示图片
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			//非雷区
			if (map[i][j] <= 8 && map[i][j] >= 0)
			{
				putimage(SIZE * j, SIZE * i, img + map[i][j]);
			}
			else if (map[i][j] == -1)	//	雷区
			{
				putimage(SIZE * j, SIZE * i, img + 11);
			}
			else if (map[i][j] >= 19 && map[i][j] <= 28)	//加密覆盖
			{
				putimage(SIZE * j, SIZE * i, img + 9);
			}
			else if (map[i][j] >=29&& map[i][j]<=38)//插旗
			{
				putimage(SIZE * j, SIZE * i, img + 10);
			}
			else if (map[i][j] >= 39 && map[i][j] <= 48)//打问号
			{
				putimage(SIZE * j, SIZE * i, img + 12);
			}
			else if (map[i][j] == 13)//踩雷
			{
				putimage(SIZE * j, SIZE * i, img + 13);
			}
		}
	}
}
//鼠标操作
void mouseEvent(int map[ROW][COL])
{
	//点击交互
	ExMessage msg = { 0 };
	if (peekmessage(&msg, EX_MOUSE))
	{
		//
		printf("鼠标操作");
		//左键点击图片
		if (msg.message == WM_LBUTTONDOWN)
		{
			int r = msg.y / SIZE;
			int c = msg.x / SIZE;
			//改变未打开所点方块所代表的数值
			if (map[r][c] >= 19 && map[r][c] <= 28)
			{
				map[r][c] -= 20;				
			}
			//连续爆开
			openNull(map, r, c);
			//结束判断
			judge(map, r, c);
			showMap(map);
		}
		else if (msg.message == WM_RBUTTONDOWN)//右键插旗或者打？
		{
			int r = msg.y / SIZE;
			int c = msg.x / SIZE;
			//改变未打开所点方块所代表的数值
			if (map[r][c] >= 19 && map[r][c] <= 28)//覆盖状态
			{
				map[r][c] += 10;
			}
			else if (map[r][c] >= 29 && map[r][c] <= 38)//旗子状态
			{
				map[r][c] += 10;
			}
			else if (map[r][c] >= 39 && map[r][c] <= 48)//问号状态
			{
				map[r][c] -= 20;
			}
			showMap(map);
		}

	}
}
//爆开
void openNull(int map[ROW][COL],int r,int c)
{
	if (map[r][c] == 0)
	{
		for (int i = r - 1; i <= r + 1; i++)
		{
			for (int j = c - 1; j <= c + 1; j++)
			{
				//未翻开的位置爆开
				if ((i >= 0 && i <= ROW && j >= 0 && j <= COL) && map[i][j] > 19 && map[i][j] <= 28)
				{
					map[i][j] -= 20;
					openNull(map, i, j);
				}
			

	
			}


		}
	}
}
//结束判断
void judge(int map[ROW][COL],int r,int c)
{
	//踩雷
	if (map[r][c] == -1)
	{
		//把所有雷打开
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
	//找出所有雷
	//遍历一遍，如果覆盖的格子或者插旗或者打问号的格子都是雷，则胜利
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if ((map[i][j]>19&& map[i][j]<=28)||(map[i][j] > 29 && map[i][j] <= 38)|| map[i][j] > 39 && map[i][j] <= 48)//有未翻/打问号/插旗的非雷格子
			{
				return;
			}
		}
	}
	//胜利将所有雷插上红旗
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] == 19  || map[i][j] == 39 )//所有雷
			{
				map[i][j] = 29;
			}
		}
	}
}
//是否游戏结束
void isOver(int map[ROW][COL])
{
	//遍历一次看有没有值为13,有13游戏结束；记录插红旗的雷的个数，等于雷数则游戏胜利
	int num = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] == 13)
			{
				//跳弹窗
				int ret = MessageBox(GetHWnd(), "你踩到雷了，是否再来一次？", "提示", MB_OKCANCEL);
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
		//胜利跳弹窗
		int ret = MessageBox(GetHWnd(), "你找到所有地雷，获胜！是否再来一次？", "提示", MB_OKCANCEL);
		if (ret == IDOK)
		{
			initMap(map);
		}
		else {
			exit(0);
		}
	}

}
