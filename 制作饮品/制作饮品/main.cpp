#include<iostream>
using namespace std;

class AbstractDrinking {
public:
	//��ˮ
	virtual void boil() = 0;

	//����
	virtual void brew() = 0;

	//���뱭��
	virtual void pourInCup() = 0;

	//���븨��
	virtual void putSomething() = 0;

	void makeDrink()
	{
		boil();
		brew();
		pourInCup();
		putSomething();
	}
};

//��������
class MakeCoffee :public AbstractDrinking
{
public:
	//��ˮ
	virtual void boil() = 0;

	//����
	virtual void brew() = 0;

	//���뱭��
	virtual void pourInCup() = 0;

	//���븨��
	virtual void putSomething() = 0;
};


int main()
{

	return 0;
}