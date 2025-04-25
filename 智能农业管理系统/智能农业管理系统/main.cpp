#include <iostream>
#include <vector>
using namespace std;

// ���ࣺũ����
class Crop {
public:
    virtual void water() = 0; // ���麯�����������ʵ��
    virtual ~Crop() {} // ������������ȷ����ȷ�ͷ��������
};

// ���ࣺС��
class Wheat : public Crop {
public:
    void water() override {
        cout << "��С��ˮ��ÿĶ��ˮ20������" << endl;
    }
};

// ���ࣺ����
class Corn : public Crop {
public:
    void water() override {
        cout << "�����׽�ˮ��ÿĶ��ˮ30������" << endl;
    }
};

// ���ࣺˮ��
class Rice : public Crop {
public:
    void water() override {
        cout << "��ˮ����ˮ��ÿĶ��ˮ50������" << endl;
    }
};

// ũ��������
class Farm {
private:
    vector<Crop*> crops; // �洢��ͬ�����ָ��
public:
    void addCrop(Crop* crop) {
        crops.push_back(crop);
    }

    void waterAll() {
        for (Crop* crop : crops) {
            crop->water(); // ��̬���ã����ݾ�����������ִ�в�ͬ����
        }
    }

    ~Farm() {
        for (Crop* crop : crops) {
            delete crop; // �ͷ��ڴ�
        }
    }
};

int main() {
    Farm farm;

    // �������
    farm.addCrop(new Wheat());
    farm.addCrop(new Corn());
    farm.addCrop(new Rice());

    // ͳһ��ˮ
    farm.waterAll();

    return 0;
}
