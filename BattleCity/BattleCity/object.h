#pragma once
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <easyx.h>
#include<time.h>
#include<Windows.h>
using namespace std;

// 定义地图尺寸（例如13x13格子，每个格子32x32像素）
const int ROWS = 13, COLS = 13;
const int TILE_SIZE = 32;


// 基类（可抽象）
class GameObject {
public:
    int x, y;         // 坐标（像素单位）
    int width, height;// 碰撞盒尺寸
    IMAGE* img;       // 贴图指针
    virtual void update() = 0;
    virtual void draw() = 0;
};

//坦克对象
// 玩家坦克类
class PlayerTank : public GameObject {
public:
    int direction;    // 0=上,1=右,2=下,3=左
    int speed = 4;    // 移动速度（像素/帧）
    bool isAlive = true;

    void update() override {
        // 根据方向更新坐标（需先调用碰撞检测）
        if (direction == 0) y -= speed;
        else if (direction == 1) x += speed;

        // ... 其他方向
    }

    void draw() override {
        // 根据方向选择不同贴图
        putimage(x, y, img);
    }
};
// 坦克与地图碰撞
//bool checkTankMapCollision(int newX, int newY) {
//    // 计算坦克四个角对应的地图格子
//    int leftTile = newX / TILE_SIZE;
//    int rightTile = (newX + TANK_WIDTH) / TILE_SIZE;
//    int topTile = newY / TILE_SIZE;
//    int bottomTile = (newY + TANK_HEIGHT) / TILE_SIZE;
//
//    // 遍历覆盖的格子，检查是否有障碍物
//    for (int i = topTile; i <= bottomTile; i++) {
//        for (int j = leftTile; j <= rightTile; j++) {
//            if (map[i][j] == 1 || map[i][j] == 2) { // 砖墙或钢墙
//                return true; // 碰撞
//            }
//        }
//    }
//    return false;
//}