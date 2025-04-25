#include <iostream>
#include <vector>
using namespace std;

// 基类：农作物
class Crop {
public:
    virtual void water() = 0; // 纯虚函数，子类必须实现
    virtual ~Crop() {} // 虚析构函数，确保正确释放子类对象
};

// 子类：小麦
class Wheat : public Crop {
public:
    void water() override {
        cout << "给小麦浇水：每亩需水20立方米" << endl;
    }
};

// 子类：玉米
class Corn : public Crop {
public:
    void water() override {
        cout << "给玉米浇水：每亩需水30立方米" << endl;
    }
};

// 子类：水稻
class Rice : public Crop {
public:
    void water() override {
        cout << "给水稻浇水：每亩需水50立方米" << endl;
    }
};

// 农场管理类
class Farm {
private:
    vector<Crop*> crops; // 存储不同作物的指针
public:
    void addCrop(Crop* crop) {
        crops.push_back(crop);
    }

    void waterAll() {
        for (Crop* crop : crops) {
            crop->water(); // 多态调用，根据具体作物类型执行不同操作
        }
    }

    ~Farm() {
        for (Crop* crop : crops) {
            delete crop; // 释放内存
        }
    }
};

int main() {
    Farm farm;

    // 添加作物
    farm.addCrop(new Wheat());
    farm.addCrop(new Corn());
    farm.addCrop(new Rice());

    // 统一浇水
    farm.waterAll();

    return 0;
}
