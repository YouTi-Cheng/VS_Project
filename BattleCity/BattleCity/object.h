#pragma once
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <easyx.h>
#include<time.h>
#include<Windows.h>
using namespace std;

// �����ͼ�ߴ磨����13x13���ӣ�ÿ������32x32���أ�
const int ROWS = 13, COLS = 13;
const int TILE_SIZE = 32;


// ���ࣨ�ɳ���
class GameObject {
public:
    int x, y;         // ���꣨���ص�λ��
    int width, height;// ��ײ�гߴ�
    IMAGE* img;       // ��ͼָ��
    virtual void update() = 0;
    virtual void draw() = 0;
};

//̹�˶���
// ���̹����
class PlayerTank : public GameObject {
public:
    int direction;    // 0=��,1=��,2=��,3=��
    int speed = 4;    // �ƶ��ٶȣ�����/֡��
    bool isAlive = true;

    void update() override {
        // ���ݷ���������꣨���ȵ�����ײ��⣩
        if (direction == 0) y -= speed;
        else if (direction == 1) x += speed;

        // ... ��������
    }

    void draw() override {
        // ���ݷ���ѡ��ͬ��ͼ
        putimage(x, y, img);
    }
};
// ̹�����ͼ��ײ
//bool checkTankMapCollision(int newX, int newY) {
//    // ����̹���ĸ��Ƕ�Ӧ�ĵ�ͼ����
//    int leftTile = newX / TILE_SIZE;
//    int rightTile = (newX + TANK_WIDTH) / TILE_SIZE;
//    int topTile = newY / TILE_SIZE;
//    int bottomTile = (newY + TANK_HEIGHT) / TILE_SIZE;
//
//    // �������ǵĸ��ӣ�����Ƿ����ϰ���
//    for (int i = topTile; i <= bottomTile; i++) {
//        for (int j = leftTile; j <= rightTile; j++) {
//            if (map[i][j] == 1 || map[i][j] == 2) { // שǽ���ǽ
//                return true; // ��ײ
//            }
//        }
//    }
//    return false;
//}