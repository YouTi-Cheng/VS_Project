#pragma once
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <easyx.h>
#include<time.h>
#include<Windows.h>
using namespace std;
#define WCELL	10		//横格数
#define HCELL	10		//竖格数
#define SIZE	10		//方格大小
#define SPEED   500		//毫秒动一次



//贴图片


//地图对象
class Map
{
public:
	Map();
	int m_Map[HCELL][WCELL];
	void showMap();
private:

};

//墙对象
class Wall {
public:
	Wall(Map map);
	//生成默认墙 边框四周
	//生成任意墙
	//void addRandWall(Wall& wall, int wallLength);
	//画墙

private:

};


////食物对象
//class Food {
//public:
//	//食物构造函数初始化
//	Food();
//	//贴食物图片
//	void drawFood(IMAGE img[]);
//	//显示食物位数
//	void showFood();
//
//	int m_x;
//	int m_y;
//
//protected:
//
//
//};
//
////蛇头对象
//class SnakeHead
//{
//public:
//	//蛇头坐标
//	int m_x;
//	int m_y;
//	//蛇头方向
//	int direction;		//0上 1下 
//
//private:
//
//};
//
////蛇身对象
//class SnakeBody
//{
//public:
//	SnakeBody();
//	int m_x;
//	int m_y;
//
//private:
//
//};
//
////蛇对象
//class Snake
//{
//public:
//	//构造函数初始化
//	Snake();
//	//显示蛇的位置
//	void showSnake();
//	//贴蛇图片
//	void drawSnake(IMAGE img[]);
//	//蛇向前运动
//	void snakeRun();
//	//蛇键盘反应
//	void keyEvent();
//	void keyEvent2();
//	//蛇吃食物
//	void eatFood(Food &f);
//	//游戏输赢判断
//	void isWin();
//	//游戏初始化
//	void initGame();
//
//private:
//	SnakeHead sh;
//	SnakeBody sb[WCELL * HCELL / SIZE / SIZE];			//身体占满整个屏幕
//	//接受键盘信息
//	ExMessage msg;
//	//身体个数
//	int bodyNum;
//};



