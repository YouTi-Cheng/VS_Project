#pragma once
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <easyx.h>
#include<time.h>
#include<Windows.h>
using namespace std;
#define WCELL	10		//�����
#define HCELL	10		//������
#define SIZE	10		//�����С
#define SPEED   500		//���붯һ��



//��ͼƬ


//��ͼ����
class Map
{
public:
	Map();
	int m_Map[HCELL][WCELL];
	void showMap();
private:

};

//ǽ����
class Wall {
public:
	Wall(Map map);
	//����Ĭ��ǽ �߿�����
	//��������ǽ
	//void addRandWall(Wall& wall, int wallLength);
	//��ǽ

private:

};


////ʳ�����
//class Food {
//public:
//	//ʳ�ﹹ�캯����ʼ��
//	Food();
//	//��ʳ��ͼƬ
//	void drawFood(IMAGE img[]);
//	//��ʾʳ��λ��
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
////��ͷ����
//class SnakeHead
//{
//public:
//	//��ͷ����
//	int m_x;
//	int m_y;
//	//��ͷ����
//	int direction;		//0�� 1�� 
//
//private:
//
//};
//
////�������
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
////�߶���
//class Snake
//{
//public:
//	//���캯����ʼ��
//	Snake();
//	//��ʾ�ߵ�λ��
//	void showSnake();
//	//����ͼƬ
//	void drawSnake(IMAGE img[]);
//	//����ǰ�˶�
//	void snakeRun();
//	//�߼��̷�Ӧ
//	void keyEvent();
//	void keyEvent2();
//	//�߳�ʳ��
//	void eatFood(Food &f);
//	//��Ϸ��Ӯ�ж�
//	void isWin();
//	//��Ϸ��ʼ��
//	void initGame();
//
//private:
//	SnakeHead sh;
//	SnakeBody sb[WCELL * HCELL / SIZE / SIZE];			//����ռ��������Ļ
//	//���ܼ�����Ϣ
//	ExMessage msg;
//	//�������
//	int bodyNum;
//};



